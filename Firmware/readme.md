# ampselector

This is the software component of the AMPSELECTOR project's hardware input (front panel)


* Keyboard Maintainer: [Ravinder SOD](https://github.com/ravinder-olivier)

## TO INSTALL
To install download the repo, run qmk new-keyboard and call it ampselector (options you select otherwise don't matter), find the folder created by that,
then delete all the files in the directory, and copy paste the files from Firmware (of this repo) into that folder, and
then run "qmk compile -kb ampselector -km default". Then you have the compiled file that you can then flash onto the 
keyboard once built.

## Bootloader

Enter the bootloader by:
- shorting the reset pin