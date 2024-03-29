/* Copyright 2015-2021 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#ifdef AUDIO_ENABLE
// #    define STARTUP_SONG SONG(PREONIC_SOUND)
// #define STARTUP_SONG SONG(NO_SOUND)

#    define DEFAULT_LAYER_SONGS \
        { SONG(QWERTY_SOUND), SONG(COLEMAK_SOUND), SONG(DVORAK_SOUND) }
#endif

#define MUSIC_MASK (keycode != KC_NO)

/*
 * MIDI options
 */

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2
//

#define NO_DEBUG
#define NO_PRINT
// #define AUDIO_CLICKY
#define NO_USB_STARTUP_CHECK

#define MK_VARIANT MK_TYPE_KINETIC

#define MK_KINETIC_MOUSE_MAXS 125
#define MK_KINETIC_MOUSE_ACCN 14
#define MK_KINETIC_MOUSE_FRIC 12
#define MK_KINETIC_MOUSE_DRAG 14

#define MK_KINETIC_WHEEL_MAXS 2
#define MK_KINETIC_WHEEL_ACCN 8

#define USB_POLLING_INTERVAL_MS 1

#ifdef AUDIO_ENABLE
  #define STARTUP_SONG SONG(S__NOTE(_E4))
  #define GOODBYE_SONG SONG(S__NOTE(_C4))
#endif

// for sanwa keyboard emulation KVM
#undef NKRO_ENABLE

#define USB_POLLING_INTERVAL_MS 1
