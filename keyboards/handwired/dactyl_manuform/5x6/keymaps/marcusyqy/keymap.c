/* A standard layout for the Dactyl Manuform 5x6 Keyboard */

#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _NAV 3

#define NAV_SCLN LT(_NAV, KC_SCLN)
#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_5x6(
     KC_EQL, KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_MINS,
     KC_TAB, KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_BSLASH,
     KC_ESC, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  , NAV_SCLN,KC_QUOT,
     KC_LSFT, KC_Z  , KC_X  , KC_C , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH, KC_RSFT,
                      KC_GRV, KC_LGUI,                                                       KC_LBRC,KC_RBRC,
                                      KC_BSPC, LOWER,                        KC_SPC, KC_ENT,
                                      KC_LALT, KC_LCTL,                      KC_RCTL,  RALT_T(KC_PSCR),
                                      RAISE, KC_DEL,                         KC_DEL, KC_RGUI
  ),
  [_LOWER] = LAYOUT_5x6(

    KC_PLUS,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                         KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_UNDS,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
    _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                    KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSLS,
    _______, KC_TILD, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC,                    KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, _______,
                     _______,_______,                                                         _______, _______,
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,_______

  ),
  [_RAISE] = LAYOUT_5x6(
       _______, KC_F1,   KC_F2,   KC_F3,   KC_F4, _______,                   _______ ,_______, KC_MS_U, _______, KC_WH_U, _______,
       _______, KC_F5,   KC_F6,   KC_F7,   KC_F8, _______,                   _______,KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, _______,
       _______, KC_F9,   KC_F10,  KC_F11,  KC_F12,_______,                    _______,KC_VOLD, KC_VOLU,KC_MUTE,_______,_______,
       _______,_______,_______,_______,_______,_______,                       _______,_______,_______,_______,_______,_______,
                       RESET,_______,                                                         _______ ,_______,
                                               _______,_______,            KC_BTN1, KC_BTN2,
                                               _______,_______,            KC_BTN3,_______,
                                               _______,_______,            _______,_______
  ),
  [_NAV] = LAYOUT_5x6(
       _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
       _______,_______,_______,_______,_______,_______,                        KC_HOME, KC_PGDN, KC_PGUP, KC_END,_______,_______,
       _______,_______,_______,_______,_______,_______,                        KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______,_______,
       _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
                       _______,_______,                                                         _______ ,_______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______
  ),
};
