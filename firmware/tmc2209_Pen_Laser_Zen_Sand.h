#pragma once
// clang-format off

/*
    tmc2209_Pen_Laser_Zen_Sand.h
    Part of Grbl_ESP32

    Pin assignments for the TMC2130 Pen/Laser controller
    https://github.com/bdring/Grbl_ESP32_TMC2130_Plotter_Controller

    2021-04-16 B. Dring

    Grbl_ESP32 is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Grbl is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Grbl_ESP32.  If not, see <http://www.gnu.org/licenses/>.
*/
#define MACHINE_NAME            "TMC2209 Pen/Laser Zen Sand"

#define CUSTOM_CODE_FILENAME    "../Custom/CoreXY.cpp"

#define USE_KINEMATICS      // there are kinematic equations for this machine
#define USE_FWD_KINEMATICS  // report in cartesian
#define USE_MACHINE_INIT    // There is some custom initialization for this machine
#define USE_CUSTOM_HOMING

#define N_AXIS 3

#define TRINAMIC_RUN_MODE           TrinamicMode :: StealthChop // Optional TrinamicMode :: CoolStep or TrinamicMode :: StallGuard
#define TRINAMIC_HOMING_MODE        TrinamicMode :: StealthChop // Optional TrinamicMode :: CoolStep or TrinamicMode :: StallGuard

#define TMC_UART                UART_NUM_1
#define TMC_UART_RX             GPIO_NUM_21
#define TMC_UART_TX             GPIO_NUM_22 

#define X_TRINAMIC_DRIVER       2209
#define X_STEP_PIN              GPIO_NUM_12
#define X_DIRECTION_PIN         GPIO_NUM_26
#define X_RSENSE                TMC2209_RSENSE_DEFAULT
#define X_DRIVER_ADDRESS        0
#define DEFAULT_X_MICROSTEPS    16

#define Y_TRINAMIC_DRIVER       2209
#define Y_STEP_PIN              GPIO_NUM_14
#define Y_DIRECTION_PIN         GPIO_NUM_25
#define Y_RSENSE                TMC2209_RSENSE_DEFAULT
#define Y_DRIVER_ADDRESS        1
#define DEFAULT_Y_MICROSTEPS    16

// OK to comment out to use pin for other features
#define STEPPERS_DISABLE_PIN GPIO_NUM_13

// cooment Z stuff out if you you don't use a Z
#define Z_SERVO_PIN                   GPIO_NUM_16 // Labeled D3 on controller
#define DEFAULT_Z_MAX_TRAVEL          5.0   // Range of travel is 5mm
#define DEFAULT_Z_HOMING_MPOS         5.0   // MPos will be set to 5mm after homing
#define Z_SERVO_CAL_MIN               1.0   // calibration factor for the minimum PWM duty
#define Z_SERVO_CAL_MAX               1.0   // calibration factor for the maximum PWM duty

//#define USE_STALLGUARD_LIMITS  // uncomment to use stallguard as limit switches
#ifdef USE_STALLGUARD_LIMITS
    // StallGuard Limit Pins
    #define X_LIMIT_PIN             GPIO_NUM_4
    #define Y_LIMIT_PIN             GPIO_NUM_15
#else
    // Switch Limit Pins
    #define X_LIMIT_PIN             GPIO_NUM_33
    #define Y_LIMIT_PIN             GPIO_NUM_32
#endif

#define SPINDLE_TYPE                SpindleType::LASER
#define LASER_OUTPUT_PIN            GPIO_NUM_27      // Labeled D1 on controller
#define LASER_ENABLE_PIN            GPIO_NUM_17      // Labeled D2 on controller







