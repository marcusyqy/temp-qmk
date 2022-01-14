/*
Copyright 2018 Mattia Dal Ben <matthewdibi@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* Use I2C or Serial, not both */
#define USE_SERIAL
// #define USE_I2C

/* Select hand configuration */
#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 14
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8


#define MK_VARIANT MK_TYPE_KINETIC

#define MK_KINETIC_MOUSE_MAXS 125
#define MK_KINETIC_MOUSE_ACCN 14
#define MK_KINETIC_MOUSE_FRIC 12
#define MK_KINETIC_MOUSE_DRAG 14

#define MK_KINETIC_WHEEL_MAXS 2
#define MK_KINETIC_WHEEL_ACCN 8

#define USB_POLLING_INTERVAL_MS 1
