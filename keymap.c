/* Copyright 2024 ~ 2026 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "keychron_common.h"

enum layers {
    MAC_BASE,
    MAC_FN,
    WIN_BASE,
    WIN_FN,
};

#define FN_MAC MO(MAC_FN)
#define FN_WIN MO(WIN_FN)

#define MOD_MASK_NONE 0

#define MAC_BASE_MASK (1 << MAC_BASE)
#define WIN_BASE_MASK (1 << WIN_BASE)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_109_iso(
        KC_ESC,             KC_BRID,  KC_BRIU,  KC_MCTRL, KC_LNPAD, KC_F5,    UG_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_SNAP,  LCG(KC_Q),  UG_NEXT,  KC_F13,   KC_F14,   KC_F15,   KC_F16,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,   KC_HOME,    KC_PGUP,  KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,            KC_DEL,   KC_END,     KC_PGDN,  KC_P7,    KC_P8,    KC_P9,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,  KC_ENT,                                   KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,            KC_UP,                KC_P1,    KC_P2,    KC_P3,
        KC_LCTL,  KC_LOPTN, KC_LCMMD,                               KC_SPC,                                 KC_RCMMD, KC_ROPTN, FN_MAC,   KC_RCTL,  KC_LEFT,  KC_DOWN,    KC_RGHT,  KC_P0,              KC_PDOT,  KC_PENT),

    [MAC_FN] = LAYOUT_109_iso(
        _______,            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,  _______,    UG_TOGG,  _______,  _______,  _______,  _______,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,
        UG_TOGG,  UG_NEXT,  UG_VALU,  UG_HUEU,  UG_SATU,  UG_SPDU,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,    _______,  _______,  _______,  _______,
        _______,  UG_PREV,  UG_VALD,  UG_HUED,  UG_SATD,  UG_SPDD,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                                  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  BAT_LVL,  _______,  _______,  _______,  _______,  _______,            _______,            _______,              _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,  _______),

    [WIN_BASE] = LAYOUT_109_iso(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_PSCR,  LGUI(KC_L), UG_NEXT,  _______,  _______,  _______,  _______,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,   KC_HOME,    KC_PGUP,  KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,            KC_DEL,   KC_END,     KC_PGDN,  KC_P7,    KC_P8,    KC_P9,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,  KC_ENT,                                   KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,            KC_UP,                KC_P1,    KC_P2,    KC_P3,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RWIN,  FN_WIN,   KC_RCTL,  KC_LEFT,  KC_DOWN,    KC_RGHT,  KC_P0,              KC_PDOT,  KC_PENT),

    [WIN_FN] = LAYOUT_109_iso(
        _______,            KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  UG_VALD,  UG_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,  _______,    UG_TOGG,  _______,  _______,  _______,  _______,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,
        UG_TOGG,  UG_NEXT,  UG_VALU,  UG_HUEU,  UG_SATU,  UG_SPDU,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,    _______,  _______,  _______,  _______,
        _______,  UG_PREV,  UG_VALD,  UG_HUED,  UG_SATD,  UG_SPDD,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                                  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  BAT_LVL,  _______,  _______,  _______,  _______,  _______,            _______,            _______,              _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,  _______),
};

const key_override_t *key_overrides[] = {
  // Move cursor to start/end of line (also works with shift for selection)
  &ko_make_with_layers(MOD_MASK_NONE, KC_HOME, LCMD(KC_LEFT), MAC_BASE_MASK),
  &ko_make_with_layers(MOD_MASK_NONE, KC_END, LCMD(KC_RIGHT), MAC_BASE_MASK),

  // Move cursor to left/right one word (also works with shift for selection)
  &ko_make_with_layers(MOD_MASK_CTRL, KC_LEFT, LOPT(KC_LEFT), MAC_BASE_MASK),
  &ko_make_with_layers(MOD_MASK_CTRL, KC_RIGHT, LOPT(KC_RIGHT), MAC_BASE_MASK),

  // Delete word before/after the current cursor position
  &ko_make_with_layers(MOD_MASK_CTRL, KC_DEL,  LOPT(KC_DEL), MAC_BASE_MASK),
  &ko_make_with_layers(MOD_MASK_CTRL, KC_BSPC,  LOPT(KC_BSPC), MAC_BASE_MASK),

  // Select all, Copy, Paste, Cut
  &ko_make_with_layers(MOD_MASK_CTRL, KC_A,  LCMD(KC_A), MAC_BASE_MASK),
  &ko_make_with_layers(MOD_MASK_CTRL, KC_C,  LCMD(KC_C), MAC_BASE_MASK),
  &ko_make_with_layers(MOD_MASK_CTRL, KC_V,  LCMD(KC_V), MAC_BASE_MASK),
  &ko_make_with_layers(MOD_MASK_CTRL, KC_X,  LCMD(KC_X), MAC_BASE_MASK),

  // Save, Find, Undo
  &ko_make_with_layers(MOD_MASK_CTRL, KC_S,  LCMD(KC_S), MAC_BASE_MASK),
  &ko_make_with_layers_and_negmods(MOD_MASK_CTRL, KC_F,  LCMD(KC_F), MAC_BASE_MASK, MOD_MASK_SHIFT),
  &ko_make_with_layers(MOD_MASK_CTRL, KC_Y,  LCMD(KC_Y), MAC_BASE_MASK), // See layout about, y and z are swapped

  // Bold, Italic, Underline
  &ko_make_with_layers_and_negmods(MOD_MASK_CTRL, KC_B,  LCMD(KC_B), MAC_BASE_MASK, MOD_MASK_SHIFT),
  &ko_make_with_layers(MOD_MASK_CTRL, KC_I,  LCMD(KC_I), MAC_BASE_MASK),
  &ko_make_with_layers(MOD_MASK_CTRL, KC_U,  LCMD(KC_U), MAC_BASE_MASK),

  // Reload, New tab
  &ko_make_with_layers(MOD_MASK_NONE, KC_F5, LCMD(KC_R), MAC_BASE_MASK),
  &ko_make_with_layers(MOD_MASK_CTRL, KC_T, LCMD(KC_T), MAC_BASE_MASK),

  // Switch applications, Windows like @ symbol
  &ko_make_with_layers(MOD_MASK_CTRL, KC_T,  LCMD(KC_TAB), MAC_BASE_MASK),
  &ko_make_with_layers(MOD_MASK_GUI, KC_Q,  ROPT(KC_L), MAC_BASE_MASK),
};
