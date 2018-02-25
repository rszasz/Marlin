/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Arduino Mega with RAMPS v1.4 for Anycubic
 *
 * Defines RAMPS_D44_PIN 44
 * Defines FAN_PIN RAMPS_D44_PIN or -1
 */

#ifndef BOARD_NAME
  #define BOARD_NAME "Trigorilla for Anycubic"
#endif

#define IS_RAMPS_EFB

#define LARGE_FLASH true

#define RAMPS_D2_PIN	2
#define RAMPS_D7_PIN	7
#define RAMPS_D8_PIN	8
#define RAMPS_D9_PIN	9
#define RAMPS_D10_PIN	10
#define RAMPS_D11_PIN	11
#define RAMPS_D44_PIN	44
#define RAMPS_D45_PIN	45

#define SERVO0_PIN RAMPS_D11_PIN

#define X_MAX_PIN RAMPS_D2_PIN


// Temperature Sensors
//
#define TEMP_0_PIN         13   // Analog Input
#define TEMP_1_PIN         14   // Analog Input
#define TEMP_2_PIN		   15   // Analog Input
#define TEMP_3_PIN         12   // Analog Input

#define TEMP_BED_PIN TEMP_2_PIN

// Fan and Heater Pins

#undef FAN_PIN
#define HEATER_0_PIN     RAMPS_D10_PIN
#define HEATER_1_PIN     RAMPS_D45_PIN
#define HEATER_2_PIN 	 RAMPS_D8_PIN

#define FAN_0_PIN		 RAMPS_D9_PIN
#define FAN_1_PIN		 RAMPS_D7_PIN
#define FAN_2_PIN        RAMPS_D44_PIN

//Match pins to old pin names
#define FAN0_PIN		FAN_0_PIN
#define FAN1_PIN		FAN_1_PIN
#define FAN2_PIN		FAN_2_PIN

#define FAN_PIN 		FAN0_PIN
#define HEATER_BED_PIN	HEATER_2_PIN



#undef ORIG_E0_AUTO_FAN_PIN
#define ORIG_E0_AUTO_FAN_PIN RAMPS_D44_PIN

#undef E1_STEP_PIN
#undef E1_DIR_PIN
#undef E1_ENABLE_PIN
#undef E1_CS_PIN

#include "pins_RAMPS_13.h"