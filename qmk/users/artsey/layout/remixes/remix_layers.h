// Copyright (c) 2022 purple-rw
// SPDX-License-Identifier: Apache-2.0
#pragma once

#define ARTSEY_STD_LAYER_PAR_LEFT \
STD_LEADING_NONES \
KC_RCBR,          KC_LPRN,          KC_RPRN,          KC_TRNS,          \
STD_BETWEEN_ROW_ONE_TWO_NONES \
KC_LCBR,          KC_LBRC,          KC_RBRC,          KC_NO             \
STD_TRAILING_NONES

#define ARTSEY_STD_LAYER_SYM_LEFT \
STD_LEADING_NONES \
KC_DLR,           KC_ASTR,          KC_UNDS,          KC_EXLM,          \
STD_BETWEEN_ROW_ONE_TWO_NONES \
KC_HASH,          KC_EQL,           KC_MINS,          _______           \
STD_TRAILING_NONES

#define ARTSEY_STD_LAYER_CUS_LEFT \
STD_LEADING_NONES \
_______,          KC_VOLD,          KC_MUTE,          KC_VOLU,          \
STD_BETWEEN_ROW_ONE_TWO_NONES \
XXXXXXX,          XXXXXXX,          XXXXXXX,          XXXXXXX           \
STD_TRAILING_NONES

#define ARTSEY_STD_LAYER_FUN_LEFT \
STD_LEADING_NONES \
KC_F1,            KC_F2,            KC_F3,            KC_F4,            \
STD_BETWEEN_ROW_ONE_TWO_NONES \
KC_F5,            KC_F6,            KC_F7,            KC_F8             \
STD_TRAILING_NONES

#define ARTSEY_STD_LAYER_RGB_LEFT \
STD_LEADING_NONES \
RGB_SPI,          RGB_HUI,          RGB_VAI,          RGB_MOD,          \
STD_BETWEEN_ROW_ONE_TWO_NONES \
RGB_RPD,          RGB_HUD,          RGB_VAD,          RGB_RMOD          \
STD_TRAILING_NONES
#endif

#define ARTSEY_STD_LAYER_PAR_RIGHT \
STD_LEADING_NONES \
_______,          KC_LPRN,          KC_RPRN,          KC_LCBR,          \
STD_BETWEEN_ROW_ONE_TWO_NONES \
XXXXXXX,          KC_LBRC,          KC_RBRC,          KC_RCBR           \
STD_TRAILING_NONES

#define ARTSEY_STD_LAYER_SYM_RIGHT \
STD_LEADING_NONES \
KC_EXLM,          KC_UNDS,          KC_ASTR,          KC_DLR,           \
STD_BETWEEN_ROW_ONE_TWO_NONES \
_______,          KC_MINS,          KC_EQL,           KC_HASH           \
STD_TRAILING_NONES

#define ARTSEY_STD_LAYER_CUS_RIGHT \
STD_LEADING_NONES \
KC_VOLD,          KC_MUTE,          KC_VOLU,          _______,          \
STD_BETWEEN_ROW_ONE_TWO_NONES \
XXXXXXX,          XXXXXXX,          XXXXXXX,          XXXXXXX           \
STD_TRAILING_NONES

#define ARTSEY_STD_LAYER_FUN_RIGHT \
STD_LEADING_NONES \
KC_F1,            KC_F2,            KC_F3,            KC_F4,            \
STD_BETWEEN_ROW_ONE_TWO_NONES \
KC_F5,            KC_F6,            KC_F7,            KC_F8             \
STD_TRAILING_NONES

#define ARTSEY_STD_LAYER_RGB_RIGHT \
STD_LEADING_NONES \
RGB_MOD,           RGB_VAI,          RGB_HUI,          RGB_SPI,         \
STD_BETWEEN_ROW_ONE_TWO_NONES \
RGB_RMOD,          RGB_VAD,          RGB_HUD,          RGB_RPD          \
STD_TRAILING_NONES


#ifdef ARTSEY_SIZE_STD
// Allow proper auto selection of left / right via keymaps
#ifdef ARTSEY_HAND_LEFT
#define ARTSEY_STD_LAYER_FUN ARTSEY_STD_LAYER_FUN_LEFT
#define ARTSEY_STD_LAYER_RGB ARTSEY_STD_LAYER_RGB_LEFT
#endif
#ifdef ARTSEY_HAND_RIGHT
#define ARTSEY_STD_LAYER_FUN ARTSEY_STD_LAYER_FUN_RIGHT
#define ARTSEY_STD_LAYER_RGB ARTSEY_STD_LAYER_RGB_RIGHT
#endif
#endif