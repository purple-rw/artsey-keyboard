// Copyright (c) 2022 purple-rw
// SPDX-License-Identifier: Apache-2.0

// Colemak base keys
#undef KEY_U1
#undef KEY_U2
#undef KEY_U3
#undef KEY_U4
#undef KEY_L1
#undef KEY_L2
#undef KEY_L3
#undef KEY_L4
#define KEY_L4 LT(LAYER_ID_NUMBERS, KC_A)
#define KEY_L3 KC_R
#define KEY_L2 KC_S
#define KEY_L1 LT(LAYER_ID_SYMBOLS, KC_T)
#define KEY_U1 LT(LAYER_ID_PARENTHETICALS, KC_N)
#define KEY_U2 KC_E
#define KEY_U3 KC_I
#define KEY_U4 LT(LAYER_ID_CUSTOM, KC_O)

// Ten-key number keys
#undef KNUM_U1
#undef KNUM_U2
#undef KNUM_U3
#undef KNUM_U4
#undef KNUM_L1
#undef KNUM_L2
#undef KNUM_L3
#undef KNUM_L4
#define KNUM_U2 KC_5
#define KNUM_L2 KC_2
#define KNUM_U4 KC_0
#define KNUM_L4 _______
#ifdef ARTSEY_HAND_LEFT
#define KNUM_L3 KC_1
#define KNUM_L1 KC_3
#define KNUM_U3 KC_4
#define KNUM_U1 KC_6
#endif
#ifdef ARTSEY_HAND_RIGHT
#define KNUM_L1 KC_1
#define KNUM_L3 KC_3
#define KNUM_U1 KC_4
#define KNUM_U3 KC_6
#endif

// RGB keys
#define KRGB_U1 RGB_MOD
#define KRGB_U2 RGB_VAI
#define KRGB_U3 RGB_HUI
#define KRGB_U4 RGB_SPI
#define KRGB_L1 RGB_RMOD
#define KRGB_L2 RGB_VAD
#define KRGB_L3 RGB_HUD
#define KRGB_L4 RGB_SPD
