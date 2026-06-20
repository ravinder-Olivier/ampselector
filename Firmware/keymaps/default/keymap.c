#include QMK_KEYBOARD_H

extern MidiDevice midi_device;

#define MIDI_CC_OFF 0
#define MIDI_CC_ON  127

enum custom_keycodes {
    MIDI_CC80 = SAFE_RANGE,
    MIDI_CC81,
    MIDI_CC82,
    MIDI_CC83,
    MIDI_CC84,
    MIDI_CC85,
    MIDI_CC86,
    MIDI_CC87,
    ENC1_CLICK, // Maps to CC92
    ENC2_CLICK  // Maps to CC93
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        MIDI_CC80, MIDI_CC81, MIDI_CC82, MIDI_CC83, ENC1_CLICK,
        MIDI_CC84, MIDI_CC85, MIDI_CC86, MIDI_CC87, ENC2_CLICK
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    uint8_t cc_number = 0;

    if (keycode >= MIDI_CC80 && keycode <= MIDI_CC87) {
        cc_number = 80 + (keycode - MIDI_CC80);
    }
    else if (keycode == ENC1_CLICK) {
        cc_number = 92;
    }
    else if (keycode == ENC2_CLICK) {
        cc_number = 93;
    }

    if (cc_number != 0) {
        if (record->event.pressed) {
            midi_send_cc(&midi_device, midi_config.channel, cc_number, MIDI_CC_ON);
        } else {
            midi_send_cc(&midi_device, midi_config.channel, cc_number, MIDI_CC_OFF);
        }
        return false;
    }

    return true;
}

#if defined(ENCODER_ENABLE)
bool encoder_update_user(uint8_t index, bool clockwise) {
    uint8_t cc_num = 0;

    if (index == 0) { // first encoder
        cc_num = clockwise ? 88 : 89;
    } else if (index == 1) { // second encoder
        cc_num = clockwise ? 90 : 91;
    }

    if (cc_num != 0) {
        // rapid on/off so gr registers a step
        midi_send_cc(&midi_device, midi_config.channel, cc_num, MIDI_CC_ON);
        midi_send_cc(&midi_device, midi_config.channel, cc_num, MIDI_CC_OFF);
    }

    return false;
}
#if defined(OLED_ENABLE)
bool oled_task_user(void) {
    // Print a static header
    oled_write_P(PSTR("AMP SELECTOR\n"), false);
    oled_write_P(PSTR("---------------\n"), false);
  /*
    // dynamic header implementation

    if (state_cc80) {
        oled_write_P(PSTR("CH 1: [ACTIVE]\n"), false);
    } else {
        oled_write_P(PSTR("CH 1:  Muted \n"), false);
    }

    if (state_cc81) {
        oled_write_P(PSTR("CH 2: [ACTIVE]\n"), false);
    } else {
        oled_write_P(PSTR("CH 2:  Muted \n"), false);
    }
*/

    return false;
}

#endif