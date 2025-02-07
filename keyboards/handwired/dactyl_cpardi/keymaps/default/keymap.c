// Copyright 2021 david@impstyle.com (@zwnk)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define _QTY 0
#define _LEFT 1
#define _RIGHT 2
#define _SYM 3
#define _GAME 4

#define _COM 5 // Compose key
#define _SP 10 // Side Panels key
#define _KEY 11 // Keyboards key
#define _DT 12 // Desktop\Window keys
#define _FUN 13 // Function keys
#define _GO 14 // Goto tabs
#define _IJ 15 // IntelliJ

enum custom_keycodes {
  CLASS = SAFE_RANGE,
  SEARCHE,
  SEARCHM,
  ACE,
  BKDEL,
  REPLAY,
  LAST_WIND,
  ALT_TAB,
  ALT_CTR_DEL,
  KNIGHTRIDER,
  WARNING_LIGHTS,
  REFAC,
  PARR,
  ARR,
  DARR
};

enum {
    TD_SFT
};

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    [TD_SFT] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS),
};

#define _TR1 MT(MOD_LALT, KC_ESC)
#define _TR2 MT(MOD_LSFT, KC_TABM1)
#define _TL2 MT(MOD_LCTL, KC_ENT)

#define _VDL LGUI(LCTL(KC_LEFT))   // Virtual desktop left
#define _VDR LGUI(LCTL(KC_RGHT))   // Virtual desktop right

#define _EXT LCTL(LALT(KC_DOT)) // Extend selection
#define _SHK LCTL(LALT(KC_COMM)) // Shrink selection

#define _SHESC LSFT(KC_ESC) // Close all windows
#define _ALTJ LALT(KC_J) // Next selection
#define _SPCLS LSFT(KC_ESC) // Close all

#define _PTAB LALT(KC_LEFT) // Previous Tab
#define _NTAB LALT(KC_RIGHT) // Next Tab

#define _PEDIT LCTL(KC_MINUS) // Previous Edit
#define _NEDIT LCTL(KC_EQL) // Next Edit

#define _PCODE LALT(KC_UP) // Previous Code
#define _NCODE LALT(KC_DOWN) // Next Code

#define _PBLOCK LCTL(KC_LBRC) // Previous Block End
#define _NBLOCK LALT(KC_RBRC) // Next Block End

#define _PWORDH LCTL(LALT(KC_LEFT)) // Previous Word Hump
#define _NWORDH LCTL(LALT(KC_RIGHT)) // Next Word Hump

#define _PWORD LCTL(KC_LEFT) // Previous Word
#define _NWORD LCTL(KC_RIGHT) // Next Word

#define _UNDO LCTL(KC_Z) // Undo
#define _REDO LCTL(KC_Y) // Redo

#define _COPY LCTL(KC_C) // Copy
#define _PASTE LCTL(KC_V) // Paste

#define _ACE LCTL(KC_SCLN) // Ace Jump

#define _CNTR LALT(KC_C) // Center
#define _CTOP LCTL(KC_PGUP) // Place cursor at the top view

#define _RINSERT LALT(KC_INS)
#define _RIMPL LALT(KC_END)
#define _SAVE LCTL(KC_S)

#define _RENT LT(_RIGHT, KC_ENT)
#define _LSPC LT(_RIGHT, KC_SPC)
#define _LKEY LT(_LEFT, KC_ESC)
#define _SESC MT(MOD_LSFT, KC_ESC)

#define _DQUOT KC_AT
#define _AT LSFT(KC_QUOTE)

#define _IFILE LALT(KC_INSERT)
#define _SPSTE LSFT(KC_INSERT)
#define _BUILD LCTL(LSFT(KC_B))
#define _CNTR LALT(KC_C)
#define _SALL LCTL(LSFT(KC_A))

#define _CTAB LCTL(LALT(KC_Z))

#define _PIPE LSFT(KC_NUBS)

#define _QIKDOCS LCTL(LSFT(KC_F1))
#define _GREF LALT(KC_END)
#define _QIKDEF LALT(KC_F12)
#define _SHWERR LALT(KC_T)

#define _SETT LCTL(LALT(KC_S))
#define _FMEMB LALT(KC_BACKSLASH)

#define _BACK LCTL(KC_MINUS)
#define _FORW LCTL(KC_EQL)

#define _NERR LCTL(KC_F11)
#define _PERR LCTL(LSFT(KC_F11))

#define _CONFIG LCTL(LSFT(LALT(KC_C)))

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

#define _EXIT LALT(KC_F4)
#define _WUP LGUI(KC_UP)
#define _WLEFT LGUI(KC_LEFT)
#define _WDOWN LGUI(KC_DOWN)
#define _WRGHT LGUI(KC_RIGHT)

#define _MUTE KC_KB_MUTE
#define _VOLU KC_KB_VOLUME_UP
#define _VOLD KC_KB_VOLUME_DOWN

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QTY] = LAYOUT(
//  ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F1,   _MUTE,   _VOLU,   _VOLD,   KC_F5,   KC_F6,                              KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12 ,
//  ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
//  ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LALT, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LALT,
//  ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     TD(TD_SFT), KC_A, KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_RSFT,
//  ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,                               KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_LCTL,
//  └────────┴────────┼────────┼────────┼────────┴────────┘                          └────────┴────────┴────────┴────────┴────────┴────────┘
                       KC_LCBR, KC_RCBR,                                                                KC_LPRN, KC_RPRN,
//  				  └────────┴────────┘                                                              └────────┴────────┘
//                                      ┌─────────┬─────────┬─────────┐  ┌─────────┬─────────┬─────────┐
                                         KC_1,    KC_2,      KC_3,        KC_A,    KC_B,      KC_C,
//                                      └─────────┼─────────┼─────────┤  ├─────────┼─────────┼─────────┘
                                                   KC_4,     KC_5,        KC_D,     KC_E
//                                                └─────────┴─────────┘  └─────────┴─────────┘
  	),

	[_LEFT] = LAYOUT(
//  ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
//  ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_AT,   KC_QUES, KC_GRV,  _______,                            _______, KC_7,    KC_8,    KC_9,    _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_QUOT, _DQUOT,  KC_SLSH, KC_NUBS, _______,                            KC_PAST, KC_4,    KC_5,    KC_6,    KC_0,    _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_AMPR, KC_DLR,  KC_CIRC,  _______,  						  _______, KC_1,    KC_2,    KC_3,    _______, _______,
//  └────────┴────────┼────────┼────────┼────────┴────────┘                          └────────┴────────┴────────┴────────┴────────┴────────┘
                       KC_LT,   KC_GT,                                                                  KC_LBRC, KC_RBRC,
//  				  └────────┴────────┘                                                              └────────┴────────┘
//                                      ┌─────────┬─────────┬─────────┐  ┌─────────┬─────────┬─────────┐
                                         _______,  _______,  _______,     _______,  _______,  _______,
//                                      └─────────┼─────────┼─────────┤  ├─────────┼─────────┼─────────┘
                                                   _______,  _______,     _______,  QK_AREP
//                                                └─────────┴─────────┘  └─────────┴─────────┘
    ),

	[_RIGHT] = LAYOUT(
//  ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
//  ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______,  _______,_______,                            _______, _______, _______, _______, _______, _______,
//  ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, KC_PERC, _______, _______,                            _______, KC_HOME, KC_PGUP, KC_PGDN, KC_END,  _______,
//  ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _PIPE,   KC_PLUS, KC_MINUS,KC_EQL,  KC_EXLM,                            _PWORDH, KC_LEFT, KC_UP,  KC_DOWN,  KC_RGHT, _NWORDH,
//  ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_NUHS, KC_UNDS, _______, _______,							  _______, _PWORD,  _PTAB,   _NTAB,   _NWORD,  _______,
//  └────────┴────────┼────────┼────────┼────────┴────────┘                          └────────┴────────┴────────┴────────┴────────┴────────┘
                       KC_LT,   KC_GT,                                                                  KC_LBRC, KC_RBRC,
//  				  └────────┴────────┘                                                              └────────┴────────┘
//                                      ┌─────────┬─────────┬─────────┐  ┌─────────┬─────────┬─────────┐
                                         KC_DEL,   LAST_WIND, _______,    _______,  _______,  _______,
//                                      └─────────┼─────────┼─────────┤  ├─────────┼─────────┼─────────┘
                                                   _______,  _______,     _______,   _______
//                                                └─────────┴─────────┘  └─────────┴─────────┘
    ),


	[_COM] = LAYOUT(
//  ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
//  ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   TO(_GO), TO(_SP), TO(_DT), TO(_FUN),KC_NO,                              KC_NO,   TO(_IJ), KC_NO,   TO(_SYM),KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
//  └────────┴────────┼────────┼────────┼────────┴────────┘                          └────────┴────────┴────────┴────────┴────────┴────────┘
                       KC_NO,   KC_NO,                                                                  KC_NO,   KC_NO,
//  				  └────────┴────────┘                                                              └────────┴────────┘
//                                      ┌─────────┬─────────┬─────────┐  ┌─────────┬─────────┬─────────┐
                                         KC_NO,    KC_NO,    KC_NO,       KC_NO,    KC_NO,    KC_NO,
//                                      └─────────┼─────────┼─────────┤  ├─────────┼─────────┼─────────┘
                                                   KC_NO ,   KC_NO ,      KC_NO,    KC_NO
//                                                └─────────┴─────────┘  └─────────┴─────────┘
    ),


	[_FUN] = LAYOUT(
//  ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
//  ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
//  ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_NO,
//  ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_F4,   KC_F5,   KC_F6,   KC_F11,  KC_NO,
//  ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F12,  KC_NO,
//  └────────┴────────┼────────┼────────┼────────┴────────┘                          └────────┴────────┴────────┴────────┴────────┴────────┘
                       KC_NO,    KC_NO,                                                                 KC_NO,   KC_NO,
//  				  └────────┴────────┘                                                              └────────┴────────┘
//                                      ┌─────────┬─────────┬─────────┐  ┌─────────┬─────────┬─────────┐
                                         KC_NO,    KC_NO,    KC_NO,       KC_NO,    KC_NO,    KC_NO,
//                                      └─────────┼─────────┼─────────┤  ├─────────┼─────────┼─────────┘
                                                   KC_NO ,   KC_NO ,      KC_NO,    KC_NO
//                                                └─────────┴─────────┘  └─────────┴─────────┘
    ),

	[_GO] = LAYOUT(
//  ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
//  ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
//  ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              _PERR, RCTL(KC_7),RCTL(KC_8),RCTL(KC_9),KC_NO,KC_NO,
//  ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   TO(_GAME),                          _NERR, RCTL(KC_4),RCTL(KC_5),RCTL(KC_6),KC_NO,KC_NO,
//  ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,               				  KC_NO, RCTL(KC_1),RCTL(KC_2),RCTL(KC_3),KC_NO,KC_NO,
//  └────────┴────────┼────────┼────────┼────────┴────────┘                          └────────┴────────┴────────┴────────┴────────┴────────┘
                       KC_NO,    KC_NO,                                                                 KC_NO,   KC_NO,
//  				  └────────┴────────┘                                                              └────────┴────────┘
//                                      ┌─────────┬─────────┬─────────┐  ┌─────────┬─────────┬─────────┐
                                         KC_NO,    KC_NO,    KC_NO,       KC_NO,    _BACK,    _FORW,
//                                      └─────────┼─────────┼─────────┤  ├─────────┼─────────┼─────────┘
                                                   KC_NO ,   KC_NO ,      KC_NO,    KC_NO
//                                                └─────────┴─────────┘  └─────────┴─────────┘
	),

	[_SP] = LAYOUT(
//  ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
//  ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   A(KC_7), A(KC_8), A(KC_9), KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   A(KC_4), A(KC_5), A(KC_6), A(KC_0), KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤      	                 ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   A(KC_1), A(KC_2), A(KC_3), KC_NO,   KC_NO,
//  └────────┴────────┼────────┼────────┼────────┴────────┘                          └────────┴────────┴────────┴────────┴────────┴────────┘
                       KC_NO,    KC_NO,                                                                 KC_NO,   KC_NO,
//  				  └────────┴────────┘                                                              └────────┴────────┘
//                                      ┌─────────┬─────────┬─────────┐  ┌─────────┬─────────┬─────────┐
                                         KC_NO,    KC_NO,    KC_NO,       KC_NO,    KC_NO,    KC_NO,
//                                      └─────────┼─────────┼─────────┤  ├─────────┼─────────┼─────────┘
                                                   KC_NO ,   KC_NO ,      _SHESC,   _SPCLS
//                                                └─────────┴─────────┘  └─────────┴─────────┘
	),

	[_DT] = LAYOUT(
//  ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
//  ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_LGUI, ALT_TAB, KC_NO,                              KC_NO,   _WLEFT,  _WUP,    _WDOWN,  _WRGHT,  KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_APP,  KC_NO,   KC_NO,                              KC_NO,   _VDL,    KC_NO,   KC_NO,    _VDR,   KC_NO,
//  └────────┴────────┼────────┼────────┼────────┴────────┘                          └────────┴────────┴────────┴────────┴────────┴────────┘
                       KC_NO,   KC_NO,                                                                  KC_NO,    KC_NO,
//  				  └────────┴────────┘                                                              └────────┴────────┘
//                                      ┌─────────┬─────────┬─────────┐  ┌─────────┬─────────┬─────────┐
                                      ALT_CTR_DEL, KC_NO,    KC_NO,       KC_NO,    KC_LGUI,   KC_NO,
//                                      └─────────┼─────────┼─────────┤  ├─────────┼─────────┼─────────┘
                                                   KC_NO ,   KC_NO ,      A(KC_F4), _EXIT
//                                                └─────────┴─────────┘  └─────────┴─────────┘
    ),

	[_IJ] = LAYOUT(
//  ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
//  ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
//	├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   _GREF,   _QIKDEF, _IFILE,  _SHWERR, KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   _SETT,   KC_NO,
//	├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,C(S(KC_F12)),C(KC_F12),KC_F12, A(KC_END), KC_NO,                           KC_NO,   REFAC,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
//	├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   _CTAB,   _ALTJ,   KC_NO,   _CONFIG, _SPSTE,                             KC_NO,   _BUILD,  KC_NO,   KC_NO,   KC_NO,   KC_NO,
//  └────────┴────────┼────────┼────────┼────────┴────────┘                          └────────┴────────┴────────┴────────┴────────┴────────┘
                       KC_NO,   KC_NO,                                                                  KC_NO,    KC_NO,
//  				  └────────┴────────┘                                                              └────────┴────────┘
//                                      ┌─────────┬─────────┬─────────┐  ┌─────────┬─────────┬─────────┐
                                         KC_NO,    KC_NO,    KC_NO,       _SALL,    _CNTR,    KC_NO,
//                                      └─────────┼─────────┼─────────┤  ├─────────┼─────────┼─────────┘
                                                   KC_NO ,   KC_NO ,      KC_NO,    KC_NO
//                                                └─────────┴─────────┘  └─────────┴─────────┘
    ),
	[_SYM] = LAYOUT(
//  ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
//  ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   PARR,    ARR,     DARR,    KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
//	├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,             				  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
//  └────────┴────────┼────────┼────────┼────────┴────────┘                          └────────┴────────┴────────┴────────┴────────┴────────┘
                       KC_NO,   KC_NO,                                                                  KC_NO,    KC_NO,
//  				  └────────┴────────┘                                                              └────────┴────────┘
//                                      ┌─────────┬─────────┬─────────┐  ┌─────────┬─────────┬─────────┐
                                         KC_NO,    KC_NO,    KC_NO,       _SALL,    _CNTR,    KC_NO,
//                                      └─────────┼─────────┼─────────┤  ├─────────┼─────────┼─────────┘
                                                   KC_NO ,   KC_NO ,      KC_NO,    KC_NO
//                                                └─────────┴─────────┘  └─────────┴─────────┘
  )

};

bool reset_one_shot = false;
static bool is_tabbing;
static bool isModActive = false;
static bool isModUsed = false;
static bool isDelActive = false;
static bool isDelComplete = false;
static int oldLayer = 0;

bool is_compose_layer(void) {
	return get_highest_layer(layer_state) >= 10;
}

void process_compose_layers(keyrecord_t *record) {
	if(record->event.pressed && is_compose_layer())
		reset_one_shot = true;
	else if(!record->event.pressed && reset_one_shot && is_compose_layer()) {
		layer_move(_QTY);
		reset_one_shot = false;
	}
}

uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
    case A(KC_J):
        return S(LALT(KC_J));
    }

    return KC_TRNS;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	process_compose_layers(record);

    if (is_tabbing & record->event.pressed) {
      switch (keycode) {
        case KC_RIGHT:
        case KC_LEFT:
        case KC_UP:
        case KC_DOWN:
        case KC_TAB:
            return true;
        default:
            is_tabbing = false;
            unregister_code(KC_LALT);
            layer_clear();
            return false;
        }
    }

    switch (keycode) {
      	case BKDEL:
           if(record->event.pressed) {
               isDelActive = true;
               oldLayer = get_highest_layer(layer_state);
               layer_clear();
               layer_on(_RIGHT);
           }
           else {
               isDelActive = false;
               if(!isDelComplete) {
                   tap_code(KC_BSPC);
               }

               layer_clear();
               layer_on(oldLayer);
               isDelComplete = false;
           }
           return false;
        case LAST_WIND:
            if (!record->event.pressed) {
                register_code(KC_LALT);
                tap_code(KC_TAB);
                unregister_code(KC_LALT);
            }
            return false;
        case ALT_CTR_DEL:
            if (!record->event.pressed) {
                register_code(KC_LALT);
                register_code(KC_LCTL);
                tap_code(KC_DEL);
                unregister_code(KC_LALT);
                unregister_code(KC_LCTL);
            }
            return false;
        case ALT_TAB:
            if (record->event.pressed & !is_tabbing) {
               register_code(KC_LALT);
               tap_code(KC_TAB);
               is_tabbing = true;
               layer_move(_RIGHT);
            }
            return false;
        case ARR:
        	if(record->event.pressed) {
              SEND_STRING("->");
            }
            return true;
        case PARR:
        	if(record->event.pressed) {
              tap_code16(_PIPE);
        		tap_code16(KC_GT);
            }
            return true;
        case DARR:
        	if(record->event.pressed) {
              SEND_STRING("=>");
            }
            return true;
        case REFAC:
        	if(record->event.pressed) {
              tap_code16(LCTL(KC_R));
              tap_code16(LCTL(KC_R));
          	}
        	return true;
      	default:
            if(record->event.pressed) {
                if(isDelActive) {
                    register_code(KC_LSFT);
                    tap_code16(keycode);
                    unregister_code(KC_LSFT);
                    tap_code(KC_BSPC);
                    isDelComplete = true;
                    return false;
                }

                if(isModActive)
                {
                    isModUsed = true;
                }
            }
      }

    return true;
}
