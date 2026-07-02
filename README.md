# Amp Selector
<img width="621" height="541" alt="image" src="https://github.com/user-attachments/assets/7666c1c1-259e-4f32-a58b-ddbb972ebcf3" />

## What is it?
This project aims to provide a hardware tool to access and use software amp modelers in a studio setting. 
I will be using this with Guitar Rig 7, and programming it as I see fit for different setlists, and I would encourage the same in those using this project, keep mixing things up. 

Features:
- OLED display
- 2 encoders
- 8 keys

## BILL OF MATERIALS (BOM)
This project will need:
- 1 Seeed Studio XIAO RP2040
- 8 through hole 1N4148 diodes
- 1 OLED Display (.91in)
- 2 EC11 Rotarary Encoders
- 8 MX Style Keyswitches
- 8 DSA Keycaps
- 1 PCB
- 1 Top case
- 1 Bottom case
- 2 M3 x 16mm Screws
- 2 M3 Heatset inserts

# BUILD INSTRUCTIONS:
All build files in the "Production" folder, or in the latest github release

## Case: 
- Slice (in your printers appropriate software) and 3d print both the "upper panel" and "lower case" 3mf files
- If you are ordering a 3d print, merely send both 3mf files to your printing service

## PCB:
- Order the PCB with the gerbers.zip file. You can choose a silkscreen color of your choice, and the dimensions are 85x100 (which will prepopulate if you wait for a few moments after uploading the gerbers.zip file)

## Soldering:
- Solder the board according to the PCB diagram here:
<img width="557.5" height="611" alt="Screenshot 2026-06-12 131719" src="https://github.com/user-attachments/assets/869be566-75ce-4838-b427-9842c2cb7795" />

## Flashing firmware:
- Download the "firmware.uf2" file
- Plug in the Xiao to your computer with a (data-compatible) USB cable
- Enter bootloader by: Pressing and holding down the B button, then press and release the R button (while continuing to hold B button), then release the B button
- Drag and drop the "firmware.uf2" file onto the Xiao, as it will appear like a USB drive on your computer
- Once it uploads it should disappear as a USB drive, and restart and begin running the QMK firmware!

## Mapping to Guitar Rig 7:
- The keyboard will output various MIDI CC codes, which you can map to various functions in GR7. There's some good info on this forum [thread](https://community.native-instruments.com/discussion/46400/guitar-rig-7-switching-presets-live-with-a-midi-foot-controller)


<br>

<br>

<br>

<br>

<br>

<br>

<br>

<br>


# Project Details 

## PCB
### Schematic
<img width="1797" height="1141" alt="image" src="https://github.com/user-attachments/assets/8396514d-3abd-46d3-91ce-4c2643199480" />

### Long format
<img width="509.5" height="149.5" alt="image" src="https://github.com/user-attachments/assets/81ea798d-6864-43a2-bef9-1db7d8381a37" />

The longer format is likely better for most studio settings, **THERE IS NO CASE DESIGNED YET FOR LONG FORMAT**

### Tall format
<img width="423" height="414.5" alt="image" src="https://github.com/user-attachments/assets/0a170f6b-1674-49bb-b46a-255913a7c2c0" />
<img width="557.5" height="611" alt="Screenshot 2026-06-12 131719" src="https://github.com/user-attachments/assets/869be566-75ce-4838-b427-9842c2cb7795" />

The taller format is likely better for desk use, or on top of an amplifier or FRFR cab (as I'll be doing)

## FIRMWARE

This project uses QMK firmware for everything.

## CASE

This project uses a two part case. The bottom part combines with the top part to form the enclosure for the keyboard. Top part of the case is glued on to the lower.
<br>
<img width="621" height="437" alt="image" src="https://github.com/user-attachments/assets/2d285a4e-2cb0-4754-87eb-ba0b4f7fa4e0" />
<img width="614" height="422" alt="image" src="https://github.com/user-attachments/assets/753bd6af-ab93-46fd-8b6c-ea46d142773f" />
<img width="591" height="446.5" alt="image" src="https://github.com/user-attachments/assets/ae9809f4-9efe-4fa1-b323-ff8d04d0f6ab" />
