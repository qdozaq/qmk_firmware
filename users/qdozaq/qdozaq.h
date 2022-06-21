#pragma once

#include "quantum.h"
#include QMK_KEYBOARD_H

// 1 2 3 4 5 6 7 8 9 0
#define _QDOZAQ_NUMS_L_ KC_1, KC_2, KC_3, KC_4, KC_5
#define _QDOZAQ_NUMS_R_ KC_6, KC_7, KC_8, KC_9, KC_0
#define _QDOZAQ_NUMS_ _QDOZAQ_NUMS_L_, _QDOZAQ_NUMS_R_

// Q W E R T Y U I O P
#define _QDOZAQ_QWERTY_1L_ KC_Q, KC_W, KC_E, KC_R, KC_T
#define _QDOZAQ_QWERTY_1R_ KC_Y, KC_U, KC_I, KC_O, KC_P
#define _QDOZAQ_QWERTY_1_ _QDOZAQ_QWERTY_1L_, _QDOZAQ_QWERTY_1R_

// A S D F G H J K L ;
#define _QDOZAQ_QWERTY_2L_ KC_A, KC_S, KC_D, KC_F, KC_G
#define _QDOZAQ_QWERTY_2R_ KC_H, KC_J, KC_K, KC_L, KC_SCLN
#define _QDOZAQ_QWERTY_2_ _QDOZAQ_QWERTY_2L_, _QDOZAQ_QWERTY_2R_

// Z X C V B N M , .
#define _QDOZAQ_QWERTY_3L_ KC_Z, KC_X, KC_C, KC_V, KC_B
#define _QDOZAQ_QWERTY_3R_ KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH
#define _QDOZAQ_QWERTY_3_ _QDOZAQ_QWERTY_3L_, _QDOZAQ_QWERTY_3R_

// F1 F2 F3 F4 F5 F6 F7 F8 F9 F10
#define _QDOZAQ_FN_L_ KC_F1, KC_F2, KC_F3, KC_F4, KC_F5
#define _QDOZAQ_FN_R_ KC_F6, KC_F7, KC_F8, KC_F9, KC_F10
#define _QDOZAQ_FN_ _QDOZAQ_FN_L_, _QDOZAQ_FN_R_

// ! @ # $ % ^ & * ( )
#define _QDOZAQ_SYMBOLS_1L_ KC_EXCLAIM, KC_AT, KC_HASH, KC_DLR, KC_PERC
#define _QDOZAQ_SYMBOLS_1R_ KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN
#define _QDOZAQ_SYMBOLS_1_ _QDOZAQ_SYMBOLS_1L_, _QDOZAQ_SYMBOLS_1R_

// x x _ x x + { } x x
#define _QDOZAQ_SYMBOLS_2L_ _______, _______, KC_UNDS, KC_PLUS, _______
#define _QDOZAQ_SYMBOLS_2R_ _______, KC_LCBR, KC_RCBR, _______, _______
#define _QDOZAQ_SYMBOLS_2_ _QDOZAQ_SYMBOLS_2L_, _QDOZAQ_SYMBOLS_2R_

// x x - = x x [ ]
#define _QDOZAQ_SYMBOLS_3L_ _______, _______, KC_MINS, KC_EQL,  _______
#define _QDOZAQ_SYMBOLS_3R_ _______, KC_LBRC, KC_RBRC, _______, _______
#define _QDOZAQ_SYMBOLS_3_ _QDOZAQ_SYMBOLS_3L_, _QDOZAQ_SYMBOLS_3R_

// x x \ | x x x x x x
#define _QDOZAQ_SYMBOLS_4L_ _______, _______, KC_BSLS, KC_PIPE, _______
#define _QDOZAQ_SYMBOLS_4R_ _______, _______, _______, _______, _______
#define _QDOZAQ_SYMBOLS_4_ _QDOZAQ_SYMBOLS_4L_, _QDOZAQ_SYMBOLS_4R_

// left down up right
#define _QDOZAQ_ARROWS_ KC_LEFT, KC_DOWN, KC_UP, KC_RGHT
