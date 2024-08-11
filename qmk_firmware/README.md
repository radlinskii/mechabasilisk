# Firmware

The `mechabasilisk` directory holds configuration files for [qmk firmware](https://qmk.fm/).

To use it, first you need to fork/clone [qmk_firmware](https://github.com/qmk/qmk_firmware), once you have it, copy the `mechabasilisk` directory and paste it in `qmk_firmware/keyboards/` directory.
Then you can run `qmk compile -kb mechabasilisk -km default` to compile the firmware.
