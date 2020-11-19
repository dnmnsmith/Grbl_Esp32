/*
    3axis_v3.h
    Part of Grbl_ESP32

    Pin assignments for the ESP32 Development Controller, v3.5.
    https://github.com/bdring/Grbl_ESP32_Development_Controller
    https://www.tindie.com/products/33366583/grbl_esp32-cnc-development-board-v35/

    2018    - Bart Dring
    2020    - Mitch Bradley

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

#define MACHINE_NAME            "No longer an ox."

#define X_STEP_PIN              GPIO_NUM_22  // DS 
#define X_DIRECTION_PIN         GPIO_NUM_23  // DS
#define Y_STEP_PIN              GPIO_NUM_19 // DS
#define Y_DIRECTION_PIN         GPIO_NUM_21 // DS
#define Y2_STEP_PIN             GPIO_NUM_5  // DS
#define Y2_DIRECTION_PIN        GPIO_NUM_18 // DS
#define Z_STEP_PIN              GPIO_NUM_16 // DS
#define Z_DIRECTION_PIN         GPIO_NUM_17 // DS

#define LIMIT_MASK              B111
#define X_LIMIT_PIN             GPIO_NUM_36  // labeled X Limit
#define Y_LIMIT_PIN             GPIO_NUM_39  // labeled Y Limit
#define Z_LIMIT_PIN             GPIO_NUM_34 // labeled Z Limit

#define HOMING_FORCE_SET_ORIGIN

#define Y_AXIS_SQUARING

// OK to comment out to use pin for other features
#define STEPPERS_DISABLE_PIN    GPIO_NUM_26
#define DEFAULT_INVERT_ST_ENABLE 0 // boolean

#define SPINDLE_TYPE            (laser_mode->get() ? SpindleType::LASER : SpindleType::RELAY)
#define SPINDLE_OUTPUT_PIN      GPIO_NUM_25  // labeled SpinPWM

#define LASER_OUTPUT_PIN        GPIO_NUM_4
#define LASER_ENABLE_PIN        GPIO_NUM_2

#define SHOW_EXTENDED_SETTINGS


//#define INVERT_SPINDLE_ENABLE_PIN

//#define COOLANT_MIST_PIN        GPIO_NUM_21  // labeled Mist
//#define COOLANT_FLOOD_PIN       GPIO_NUM_16  // labeled Flood
#define PROBE_PIN               GPIO_NUM_32  // labeled Probe

//#define CONTROL_SAFETY_DOOR_PIN GPIO_NUM_35  // labeled Door,  needs external pullup
#define CONTROL_RESET_PIN       GPIO_NUM_27  // labeled Reset, needs external pullup
#define CONTROL_FEED_HOLD_PIN   GPIO_NUM_14  // labeled Hold,  needs external pullup
#define CONTROL_CYCLE_START_PIN GPIO_NUM_33  // labeled Start, needs external pullup
