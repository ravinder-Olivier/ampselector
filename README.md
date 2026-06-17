# Amp Selector
<img width="621" height="541" alt="image" src="https://github.com/user-attachments/assets/7666c1c1-259e-4f32-a58b-ddbb972ebcf3" />

## What is it?
This project aims to provide a hardware tool to access and use software amp modelers in a studio setting.

## PCB
### Schematic
<img width="1797" height="1141" alt="image" src="https://github.com/user-attachments/assets/8396514d-3abd-46d3-91ce-4c2643199480" />

### Long format
<img width="509.5" height="149.5" alt="image" src="https://github.com/user-attachments/assets/81ea798d-6864-43a2-bef9-1db7d8381a37" />

The longer format is likely better for most studio settings, **THERE IS NO CASE DESIGNED YET FOR LONG FORMAT**

### Tall format
<img width="423" height="414.5" alt="image" src="https://github.com/user-attachments/assets/0a170f6b-1674-49bb-b46a-255913a7c2c0" />

The taller format is likely better for desk use, or on top of an amplifier or FRFR cab (as I'll be doing)

## FIRMWARE

This project uses QMK to drive the Xiao. 

### To install 
Download the repo, run qmk new-keyboard and call it ampselector (options you select otherwise don't matter), find the folder created by that, then delete all the files in the directory, and copy paste the files from Firmware (of this repo) into that folder, and then run "qmk compile -kb ampselector -km default". Then you have the compiled file that you can then flash onto the keyboard once built.

### Bootloader
Enter the bootloader by:
- shorting the reset pin

## CASE

This project uses a two part case. The bottom part combines with the top part to form the enclosure for the keyboard.
<img width="621" height="437" alt="image" src="https://github.com/user-attachments/assets/2d285a4e-2cb0-4754-87eb-ba0b4f7fa4e0" />
<img width="614" height="422" alt="image" src="https://github.com/user-attachments/assets/753bd6af-ab93-46fd-8b6c-ea46d142773f" />
<img width="591" height="446.5" alt="image" src="https://github.com/user-attachments/assets/ae9809f4-9efe-4fa1-b323-ff8d04d0f6ab" />

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
