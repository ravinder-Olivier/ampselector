// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_layers {
    _BASE,
    _MEDIA    // called for encoder click
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

     [_BASE] = LAYOUT(
         KC_0,    KC_1,    KC_2,    KC_3,    KC_MUTE,    // keys 1-4 and encoder 1 click
         KC_A,    KC_B,    KC_C,    KC_D,    MO(_MEDIA)  // keys 5-8 and encoder 2 click
     ),

     [_MEDIA] = LAYOUT(
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    // KC_TRNS means "transparent" (inherits base layer keys)
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
     )
 };

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(MS_WHLD);
        } else {
            tap_code(MS_WHLU);
        }
    }
    return true;
}
