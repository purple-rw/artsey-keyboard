// Copyright (c) 2022 purple-rw
// SPDX-License-Identifier: Apache-2.0

// Colemak base keys
#undef KEY_T1
#undef KEY_T2
#undef KEY_T3
#undef KEY_T4
#undef KEY_B1
#undef KEY_B2
#undef KEY_B3
#undef KEY_B4
#define KEY_B4 LT(LAYER_ID_NUMBERS, KC_A)
#define KEY_B3 KC_R
#define KEY_B2 KC_S
#define KEY_B1 LT(LAYER_ID_SYMBOLS, KC_T)
#define KEY_T1 LT(LAYER_ID_PARENTHETICALS, KC_N)
#define KEY_T2 KC_E
#define KEY_T3 KC_I
#define KEY_T4 LT(LAYER_ID_CUSTOM, KC_O)

// Ten-key number keys
#undef KNUM_T1
#undef KNUM_T2
#undef KNUM_T3
#undef KNUM_T4
#undef KNUM_B1
#undef KNUM_B2
#undef KNUM_B3
#undef KNUM_B4
#define KNUM_T2 KC_5
#define KNUM_B2 KC_2
#define KNUM_T4 KC_0
#define KNUM_B4 _______
#ifdef ARTSEY_HAND_LEFT
#define KNUM_B3 KC_1
#define KNUM_B1 KC_3
#define KNUM_T3 KC_4
#define KNUM_T1 KC_6
#endif
#ifdef ARTSEY_HAND_RIGHT
#define KNUM_B1 KC_1
#define KNUM_B3 KC_3
#define KNUM_T1 KC_4
#define KNUM_T3 KC_6
#endif

// RGB keys
#define KRGB_T1 RGB_MOD
#define KRGB_T2 RGB_VAI
#define KRGB_T3 RGB_HUI
#define KRGB_T4 RGB_SPI
#define KRGB_B1 RGB_RMOD
#define KRGB_B2 RGB_VAD
#define KRGB_B3 RGB_HUD
#define KRGB_B4 RGB_SPD
