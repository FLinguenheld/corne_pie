/*
    2022
*/

#pragma once

/* Select hand configuration */
#define MASTER_LEFT
// #define MASTER_RIGHT

// Useless ?
// #ifdef CONVERT_TO_ELITE_PI
// #   define USB_VBUS_PIN 19U
// #endif


// --------------------------------------------------------------------------------
// --------------------------------------------------------------------------------

// Flash
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET              // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.

// --------------------------------------------------------------------------------
// --------------------------------------------------------------------------------

// OLED
#define OLED_FONT_H "keyboards/crkbd/keymaps/corne_pie/font/glcdfont.c"

#define OLED_BRIGHTNESS 60 // Protect my eyesss
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_MODS_ENABLE
#define SPLIT_OLED_ENABLE

// Used in the oled_task_user() function, because the OLED_TIMEOUT doesn't work correctly
#undef  OLED_TIMEOUT
#define OLED_KEY_TIMEOUT 25000

// Auto shift ♥
#define AUTO_SHIFT_TIMEOUT 115

// Redefine CTRL + space
// See space cadet shift
#define LCPO_KEYS KC_LCTL, KC_TRNS, KC_SPC

// Unicode
// #define UNICODE_SELECTED_MODES UC_LNX
#define UNICODE_SELECTED_MODES UNICODE_MODE_LINUX

// Used for : shift
#define TAPPING_TERM 115

// leader
#define LEADER_PER_KEY_TIMING
#define LEADER_TIMEOUT 280
#define LEADER_NO_TIMEOUT


// Mouse
#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL

#define MK_C_OFFSET_0 1
#define MK_C_INTERVAL_0 12

#define MK_C_OFFSET_1 4
#define MK_C_INTERVAL_1 18

#define MK_C_OFFSET_UNMOD 13
#define MK_C_INTERVAL_UNMOD 15

#define MK_C_OFFSET_2 25
#define MK_C_INTERVAL_2 10


#define MK_W_OFFSET_0 1
#define MK_W_INTERVAL_0 160

#define MK_W_OFFSET_1 2
#define MK_W_INTERVAL_1 120

#define MK_W_OFFSET_UNMOD 4
#define MK_W_INTERVAL_UNMOD 70

#define MK_W_OFFSET_2 10
#define MK_W_INTERVAL_2 30


// RGB
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_TWINKLE
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17
