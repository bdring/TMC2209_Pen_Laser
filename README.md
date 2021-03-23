# TMC2209 Pen Laser

This is a pen plotter controller that uses the ESP32 microcontroller and TMC2209 stepper motors drivers. The ESP32 runs [Grbl_ESP32 firmware](https://github.com/bdring/Grbl_Esp32) which allows you to run your machine wirelessly from your phone or PC via Bluetooth or Wifi. You can also stream via USB or micro SD card. The TMC2209 stepper drivers run your stepper motors super quietly and you can completely configure them via software (no more pots and jumpers).

Features

- (2) Built in TMC2209 Stepper Drivers
  - 12-30V operation
  - 1.2A Max Run Current
  - Sensorless stall detection
  - All settings adjustable in firmware
- (2) Input Circuits
  - Includes R/C Noise filtering
- (1) RC Servo Output
  - For pen lift mechanism
- (2) 5V outputs (typical uses)
  - Laser PWM
  - Laser Enable
  - Assist Air
  - Spindle
- (1) Fan connector
- (1) Micro SD socket.



