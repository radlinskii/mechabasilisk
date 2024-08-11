// Copyright 2024 Ignacy Radliński (@radlinskii)
// SPDX-License-Identifier: GPL-2.0-or-later

enum custom_keycodes { K_COLEMAK = SAFE_RANGE, K_QWERTY };

// COLEMAK
#define LALT_KA LALT_T(KC_A)
#define LCTL_KR LCTL_T(KC_R)
#define LGUI_KS LGUI_T(KC_S)
#define LSFT_KT LSFT_T(KC_T)
#define RSFT_KN RSFT_T(KC_N)
#define RGUI_KE RGUI_T(KC_E)
#define RCTL_KI RCTL_T(KC_I)
#define LALT_KO LALT_T(KC_O) // LALT instead of RALT
#define RALT_KG RALT_T(KC_G)
#define RALT_KM RALT_T(KC_M)

// QWERTY
// #define LALT_KA LALT_T(KC_A) // already defined in COLEMAK setup
#define LCTL_KS LCTL_T(KC_S)
#define LGUI_KD LGUI_T(KC_D)
#define LSFT_KF LSFT_T(KC_F)
#define RSFT_KJ RSFT_T(KC_J)
#define RGUI_KK RGUI_T(KC_K)
#define RCTL_KL RCTL_T(KC_L)
#define LA_SCLN LALT_T(KC_SCLN) // LALT instead of RALT
#define RALT_KG RALT_T(KC_G)
#define RALT_KH RALT_T(KC_H)

// SYM
#define LGU_GRV LGUI_T(KC_GRV)
#define LSF_QT LSFT_T(KC_QUOT)
#define RSF_MIN RSFT_T(KC_MINS)
#define RGU_EQL RGUI_T(KC_EQL)

// MISC
#define KC_CAPW LGUI(LSFT(KC_3)) // capture the whole screen on MacOS
#define KC_CAPP LGUI(LSFT(KC_5)) // capture portion of the screen on MacOS
#define GUI_DWN LGUI(KC_DOWN)    // jump to the bottom of the document
#define GUI_UP LGUI(KC_UP)       // jump to the top of the document

// LAYERS
#define MO_SYM MO(_SYM)
#define MO_NAV MO(_NAV)
#define MS_ENT LT(_MOUSE, KC_ENT)
#define NUM_TAB LT(_NUM, KC_TAB)
