/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.   ,-------------------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,LT(3,KC_R),  KC_T,  KC_MEH,      TT(3),    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------|   |-------+--------+--------+--------+--------+--------+--------|
     CTL_T(KC_ESC),SFT_T(KC_A),OPT_T(KC_S),CMD_T(KC_D),LT(1,KC_F),KC_G,KC_HYPR,TT(5),KC_H,   KC_J,RCMD_T(KC_K),KC_L,RSFT_T(KC_SCLN),MEH_T(KC_QUOT),
  //|--------+--------+--------+--------+--------+--------+--------'   `-------+--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,LT(5, KC_X), KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_HYPR,
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                          KC_LOPT, KC_LGUI,   MO(2),   LT(1, KC_ENT),KC_SPC, MO(4)
                                      //`--------------------------'  `--------------------------'
  ),

    [1] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.   ,-------------------------------------------------------------.
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,    _______, XXXXXXX, KC_PGUP, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|   |-------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, XXXXXXX, _______,    _______, KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------'   `-------+--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_HOME, KC_PGDN, XXXXXXX,  KC_END, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.   ,-------------------------------------------------------------.
      _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, _______,    _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------|   |-------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, KC_EXLM,   KC_AT, _______,    _______, KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------+--------'   `-------+--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.   ,-------------------------------------------------------------.
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,    _______, XXXXXXX,   KC_P7,   KC_P8,   KC_P9, XXXXXXX, _______,
  //|--------+--------+--------+--------+--------+--------+--------|   |-------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, XXXXXXX, _______,    _______, XXXXXXX,   KC_P4,   KC_P5,   KC_P6, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------'   `-------+--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX,   KC_P1,   KC_P2,   KC_P3, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,      KC_P0, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [4] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.   ,-------------------------------------------------------------.
      KC_CAPS,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, _______,    _______,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------+--------|   |-------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, XXXXXXX, _______,    _______, XXXXXXX, XXXXXXX, XXXXXXX,  KC_F11,  KC_F12,  KC_MEH,
  //|--------+--------+--------+--------+--------+--------+--------'   `-------+--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_BRID, KC_BRIU, KC_VOLD, KC_VOLU, KC_MUTE, KC_HYPR,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [5] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.   ,-------------------------------------------------------------.
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,    _______, XXXXXXX, KC_WH_U, KC_MS_U, XXXXXXX, XXXXXXX, _______,
  //|--------+--------+--------+--------+--------+--------+--------|   |-------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, XXXXXXX, _______,    _______, KC_WH_L, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_R, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------'   `-------+--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_WH_D, XXXXXXX, KC_BTN2, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    KC_BTN1, KC_BTN4, KC_BTN5
                                      //`--------------------------'  `--------------------------'
  )
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SFT_T(KC_A):    // left home row
        case OPT_T(KC_S):    // left home row
        case GUI_T(KC_D):    // left home row
        case MEH_T(KC_QUOT): // right home row
        case RCMD_T(KC_K):    // right home row
        case ROPT_T(KC_L):    // right home row
        case RSFT_T(KC_SCLN): // right home row
            return TAPPING_TERM + 60;
        default:
            return TAPPING_TERM;
    }
}

uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(3,KC_R):
            return 0;        // disable quick tap
        default:
            return QUICK_TAP_TERM;
    }
}

bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(1, KC_F):
        case LT(3, KC_R):
        case LT(1, KC_ENT):
            // Immediately select the hold action when another key is tapped.
            return true;
        default:
            // Do not select the hold action when another key is tapped.
            return false;
    }
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CTL_T(KC_ESC):
            // Immediately select the hold action when another key is pressed.
            return true;
        default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
}

void keyboard_post_init_user(void) {
    rgblight_disable(); // Turns off RGB on startup
}

