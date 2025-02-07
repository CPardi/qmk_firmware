#include QMK_KEYBOARD_H

#define _QTY 0
#define _UPR 1
#define _LWR 2
#define _COM 5 // Compose
#define _SYM 3
#define _GAME 4
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
  ALT_TAB,
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
#define _ALT1 LALT(KC_1) // Show File explorer
#define _ALT2 LALT(KC_2) // Show File structure
#define _ALT3 LALT(KC_3) // Show errors
#define _ALT4 LALT(KC_4) // Show tests
#define _ALT5 LALT(KC_5) // Show tests
#define _ALT6 LALT(KC_6) // Show tests
#define _ALT7 LALT(KC_7) // Show tests
#define _ALT8 LALT(KC_8) // Show tests
#define _ALT9 LALT(KC_9) // Show tests
#define _ALT0 LALT(KC_0) // Show build

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

#define _LENT LT(_LWR, KC_ENT)
#define _UKEY LT(_UPR, REPLAY)
#define _USPC LT(_UPR, KC_SPC)
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LALT, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LALT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     TD(TD_SFT), KC_A, KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_RSFT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    _CTOP,            _SESC,   KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_LCTL,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    BKDEL,   TO(_COM), _UKEY,                     _LENT,   KC_SPC,  KC_TAB
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

   [_UPR] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_BSLS, KC_SLSH, KC_LCBR, KC_RCBR, KC_NO,                              KC_NO,   KC_7,    KC_8,    KC_9,    _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_LT,   KC_GT,   KC_LPRN, KC_RPRN, KC_NUBS,                            KC_0,    KC_4,    KC_5,    KC_6,    _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_NUBS, KC_SLSH, KC_LBRC, KC_RBRC, KC_SLSH, _______,          _______, KC_NO,   KC_1,    KC_2,    KC_3,    _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   KC_NO,   ALT_TAB, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
// KC_PIPE, KC_DLR,  KC_PERC, KC_CIRC, KC_QUOT
  [_LWR] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _ALT1,   _ALT2,   _ALT3,    _ALT4,  _ALT5,                              _ALT6,   _ALT7,   _ALT8,   _ALT9,   _ALT0,   _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_GRV,  KC_AMPR, KC_PERC, KC_DLR,  KC_TILD,                            KC_AT,   KC_HOME, KC_PGUP, KC_PGDN, KC_END,  _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_PLUS, _PIPE,  KC_MINUS, KC_EQL,  KC_QUOT,                            _PWORDH, KC_LEFT, KC_UP,  KC_DOWN,  KC_RGHT, _NWORDH,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_NUHS, KC_QUOT, KC_UNDS, _AT,     _DQUOT,  _______,          _______, KC_QUES, _PWORD,  _PTAB,   _NTAB,   _NWORD,  _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_DEL,  _ACE,    LCTL(KC_Z),                _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),


  [_COM] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ─────────├────────┼────────┼────────┼────────┼────────┼
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   TO(_KEY),KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ─────────├────────┼────────┼────────┼────────┼────────┼
     KC_NO,   TO(_GO), TO(_SP), TO(_DT), TO(_FUN),KC_NO,                              KC_NO,   TO(_IJ), KC_NO,   TO(_SYM),KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   _______,          TO(_QTY), KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_SYM] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _ALT1,   _ALT2,   _ALT3,    _ALT4,  _ALT5,                              _ALT6,   _ALT7,   _ALT8,   _ALT9,   _ALT0,   _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   PARR,    ARR,     DARR,    KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   _______,          _______, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_NO,  KC_NO,    KC_NO,                     _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_GAME] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    TO(_QTY),
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ─────────├────────┼────────┼────────┼────────┼────────┼
     KC_LGUI, KC_EQL,   KC_Q,    KC_Z,    KC_E,    KC_R,                              KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ─────────├────────┼────────┼────────┼────────┼────────┼
     KC_NUHS, KC_QUOT,  KC_A,    KC_W,    KC_D,    KC_F,                              KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     ACE,     KC_SLSH, KC_NUBS, KC_S,    KC_B,    KC_C,    KC_V,             _CTOP,   KC_ESC,  KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_DEL,   KC_SPC, KC_LSFT,                   _LENT,   _USPC,   KC_TAB
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_FUN] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ─────────├────────┼────────┼────────┼────────┼────────┼
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ─────────├────────┼────────┼────────┼────────┼────────┼
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_F4,   KC_F5,   KC_F6,   KC_F11,  KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,             KC_NO,  KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F12,  KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_NO,   KC_NO,   KC_NO,                     KC_NO,   KC_NO,   KC_NO
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_SP] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ─────────├────────┼────────┼────────┼────────┼────────┼
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   _ALT7,   _ALT8,   _ALT9,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ─────────├────────┼────────┼────────┼────────┼────────┼
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              _ALT0,   _ALT4,   _ALT5,   _ALT6,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   LCTL(KC_1),KC_NO, KC_NO,   KC_NO,   KC_NO,            _SHESC,  KC_NO,   _ALT1,   _ALT2,   _ALT3,   KC_NO,   KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_NO,   KC_NO,   KC_NO,                     KC_NO,   LSFT(KC_TAB),  KC_NO
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_KEY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌─────── ─┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ─────────├────────┼────────┼────────┼────────┼────────┼
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   QK_BOOT,   KC_NO,                              KC_NO,   RGB_M_SW, RGB_TOG, KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ─────────├────────┼────────┼────────┼────────┼────────┼
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   TO(_GAME),                          KC_NO,   RGB_M_K, RGB_M_X, RGB_M_SN,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_NO,   KC_NO,   KC_NO,                     KC_NO,   RGB_TOG,  KC_NO
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

  [_DT] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ─────────├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ─────────├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   QK_BOOT,   KC_NO,                              KC_NO,   KC_NO,           KC_NO,           KC_NO,            KC_NO,          KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ─────────├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   TO(_GAME),                          KC_NO,   LGUI(KC_LEFT),   LGUI(KC_UP),     LGUI(KC_DOWN),   LGUI(KC_RIGHT),   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼
     KC_NO,   KC_NO,   KC_NO,   KC_APP,  KC_NO,   KC_NO,   KC_NO,         LALT(KC_F4),KC_NO,   LGUI(LCTL(KC_LEFT)), KC_NO,       KC_NO,         LGUI(LCTL(KC_RIGHT)),  KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └────────┼────────├────────────────┼────────────────┼────────────────┼────────────────┼────────────────┼
                                    KC_NO,   KC_NO,   KC_NO,                   LGUI(KC_TAB), KC_LGUI,   KC_NO
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_GO] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ─────────├────────┼────────┼────────┼────────┼────────┼
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   QK_BOOT,   KC_NO,                              _PERR, RCTL(KC_7),RCTL(KC_8),RCTL(KC_9),KC_NO,KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ─────────├────────┼────────┼────────┼────────┼────────┼
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   TO(_GAME),                          _NERR, RCTL(KC_4),RCTL(KC_5),RCTL(KC_6),KC_NO,KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_NO, RCTL(KC_1),RCTL(KC_2),RCTL(KC_3),KC_NO,KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_NO,   KC_NO,   KC_NO,                     KC_NO,   _BACK,   _FORW
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
),

  [_IJ] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ─────────├────────┼────────┼────────┼────────┼────────┼
     KC_NO,   _GREF,   _QIKDEF, _QIKDOCS,_SHWERR, KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   _SETT,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ─────────├────────┼────────┼────────┼────────┼────────┼
     KC_NO,   _SALL,   KC_NO,   _IFILE,  KC_F12,   KC_NO,                             KC_NO,   REFAC,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   _CTAB,   KC_NO,   _CONFIG, _CNTR,   _SPSTE,   KC_NO,           KC_NO,   KC_NO,   _BUILD,  KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_NO,   KC_NO,   KC_NO,                     KC_NO,   KC_NO,   KC_NO
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};


bool reset_one_shot = false;
static bool is_tabbing;
static bool isModActive = false;
static bool isModUsed = false;
static bool isDelActive = false;
static bool isDelComplete = false;
static int oldLayer = 0;

bool layer_mod(keyrecord_t *record, uint16_t layer, uint16_t mod) {
    if(record->event.pressed)
    {
        isModActive = true;
        register_code(mod);
    }
    else
    {
        if(!isModUsed)
        {
            layer_clear();
            layer_on(layer);
        }
        isModActive = false;
        isModUsed = false;
        unregister_code(mod);
    }

    return false;
}

int get_current_layer(void) {
    if(layer_state_is(0))
    {
        return 0;
    }
    else if(layer_state_is(1))
    {
        return 1;
    }
    else if(layer_state_is(2))
    {
        return 2;
    }

    return -1;
}

static bool speed_scroll = false;
static keyrecord_t last_keycode;

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

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    process_compose_layers(record);

    if(record->event.pressed) {
        last_keycode = *record;
    }

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
      case _LENT:
        speed_scroll = record->event.pressed;
        break;
    case BKDEL:
        if(record->event.pressed) {
            isDelActive = true;
            oldLayer = get_current_layer();
            layer_clear();
            layer_on(_LWR);
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
        break;
    case REPLAY:
        if(record->event.pressed)
        {
            process_record(&last_keycode);
        }
        return false;
     case ALT_TAB:
         if (record->event.pressed & !is_tabbing) {
            register_code(KC_LALT);
            tap_code(KC_TAB);
            is_tabbing = true;
            layer_move(_LWR);
         }
         return false;
     case KNIGHTRIDER:
        if(record->event.pressed) {
            rgblight_setrgb(RGB_ORANGE);
            rgblight_set();
        }
        return true;
     case WARNING_LIGHTS:
        if(record->event.pressed) {
            rgblight_toggle();
        }
        return true;
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

// void keyboard_post_init_user(void) {
    // Internet browser
    // declare_compose_seq((uint64_t[]){KC_E, KC_N}, 2, LCTL(KC_PGUP));
    // declare_compose_seq((uint64_t[]){KC_E, KC_DOT}, 2, LCTL(KC_PGDN));
    // declare_compose_seq((uint64_t[]){KC_E, KC_I}, 2, LCTL(KC_L));
    // declare_compose_seq((uint64_t[]){KC_E, KC_ESC}, 2, LCTL(KC_F4));
    // declare_compose_seq((uint64_t[]){KC_E, KC_L}, 2, LCTL(KC_F4));
    // declare_compose_seq((uint64_t[]){KC_E, KC_K}, 2, LCTL(KC_T));
    // declare_compose_seq((uint64_t[]){KC_E, KC_J}, 2, LALT(KC_LEFT));
    // declare_compose_seq((uint64_t[]){KC_E, KC_SCLN}, 2, LALT(KC_RIGHT));
// }

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_WH_D);
        }
        else {
            tap_code(KC_WH_U);
        }
    }

    return true;
}
