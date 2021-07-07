/* Copyright 2021 Owen Johnstone
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
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _LOWER,
    _RAISE,
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
    KC_GESC, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT,
    KC_SLEP, KC_LCTL, KC_LOPT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
    ),
    [_LOWER] = LAYOUT(
    _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, KC_P7,   KC_P8,   KC_P9,   _______, _______,
    _______, _______, KC_MRWD, KC_MPLY, KC_MFFD, _______, _______, KC_P4,   KC_P5,   KC_P6,   KC_BSPC, KC_ENT,
    KC_CIRC, KC_PPLS, KC_PMNS, KC_PAST, KC_PSLS, KC_PEQL, _______, KC_P1,   KC_P2,   KC_P3,   _______, _______,
    KC_WAKE, _______, _______, _______, _______, _______, KC_SPC,  KC_P0,   KC_PDOT, _______, _______, _______
    ),
    [_RAISE] = LAYOUT(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    KC_UNDS, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_AMPR, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, KC_BSLS,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, KC_SPC,  _______, _______, _______, _______, _______, _______
    ),
};
