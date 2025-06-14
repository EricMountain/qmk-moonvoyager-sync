#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_255_255,
  HSV_86_255_128,
  HSV_172_255_255,
  MAC_LOCK,
};



enum tap_dance_codes {
  DANCE_0,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    BP_DLR,         BP_DQOT,        BP_LGIL,        BP_RGIL,        BP_LPRN,        BP_RPRN,        KC_TRANSPARENT,                                 KC_TRANSPARENT, BP_AT,          BP_PLUS,        BP_MINS,        BP_SLSH,        BP_ASTR,        BP_EQL,         
    MT(MOD_LALT, KC_TAB),LT(5, BP_B),    LT(6, BP_ECUT), LT(7, BP_P),    LT(8, BP_O),    LT(10, BP_EGRV),KC_TRANSPARENT,                                 KC_TRANSPARENT, BP_W,           BP_V,           BP_D,           BP_L,           LT(5, BP_J),    BP_Z,           
    KC_LEFT_SHIFT,  BP_A,           BP_U,           BP_I,           BP_E,           LT(9, BP_COMM), KC_TRANSPARENT,                                                                 KC_TRANSPARENT, BP_C,           BP_T,           BP_S,           BP_R,           BP_N,           MT(MOD_RSFT, BP_M),
    OSL(15),        BP_AGRV,        BP_Y,           BP_X,           BP_DOT,         BP_K,                                           BP_APOS,        BP_Q,           BP_G,           BP_H,           BP_F,           KC_LEFT_ALT,    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_ESCAPE,                                                                                                      KC_DELETE,      KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    MT(MOD_LCTL, KC_SPACE),MT(MOD_LGUI, KC_ESCAPE),KC_LEFT_ALT,                    KC_RIGHT_ALT,   KC_BSPC,        MT(MOD_RALT, KC_ENTER)
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, BP_DQOT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_RSFT, BP_M),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_GUI,    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    MT(MOD_LGUI, KC_SPACE),MT(MOD_LCTL, KC_ESCAPE),KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        MT(MOD_RSFT, KC_QUOTE),
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    MT(MOD_LALT, KC_TAB),LT(5, KC_Q),    LT(6, KC_W),    LT(7, KC_E),    LT(8, KC_R),    LT(10, KC_T),   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           LT(5, KC_P),    KC_BSLS,        
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           LT(9, KC_G),    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        MT(MOD_RSFT, KC_QUOTE),
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_LEFT_GUI,    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    MT(MOD_LGUI, KC_SPACE),MT(MOD_LCTL, KC_ESCAPE),KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_LEFT_ALT,                                                                    KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_LEFT_CTRL,   KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_ENTER
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         KC_TRANSPARENT, KC_F12,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_LEFT_ALT,    KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_PSCR,        LSFT(KC_PSCR),  LGUI(LSFT(BP_4)),LGUI(LSFT(BP_5)),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPC,        KC_DELETE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_KP_EQUAL,    BP_7,           BP_8,           BP_9,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(1),          TO(0),          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_KP_PLUS,     BP_4,           BP_5,           BP_6,           KC_KP_ASTERISK, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_KP_MINUS,    BP_1,           BP_2,           BP_3,           KC_KP_SLASH,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,                                        KC_TRANSPARENT, BP_0,           BP_DOT,         BP_COMM,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(1),          TO(0),          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, BP_RPRN,        BP_RBRC,        BP_RCBR,        BP_GRTR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, BP_LPRN,        BP_LBRC,        BP_LCBR,        BP_LESS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, BP_PERC,        BP_DCRC,        KC_TRANSPARENT, BP_NDSH,        BP_MDSH,        BP_DEGR,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(1),          TO(0),          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, BP_EXLM,        BP_DLR,         BP_AT,          BP_PIPE,        BP_GRV,         BP_UNDS,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, BP_CCED,        BP_HASH,        BP_AMPR,        BP_TILD,        BP_DQOT,        BP_CIRC,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,                                        KC_ENTER,       KC_SPACE,       BP_ECIR,        KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LCTL(KC_SPACE)),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [10] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN3,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, TO(4),          TO(1),          TO(0),          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_UP,    KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN2,     KC_MS_BTN3,     KC_MS_BTN1,     KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_RIGHT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,                                        KC_MS_WH_DOWN,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [11] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, TO(4),          TO(1),          TO(0),          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [12] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(1),          TO(0),          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, HSV_0_255_255,  HSV_86_255_128, HSV_172_255_255,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_MODE_FORWARD,                                                                                                RGB_TOG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    RGB_VAD,        RGB_VAI,        TOGGLE_LAYER_COLOR,                RGB_SLD,        RGB_HUD,        RGB_HUI
  ),
  [13] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,         
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_TILD,                                        KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_BSLS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_COMMA,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_DOT,         KC_0,           KC_EQUAL,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [14] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(1),          TO(0),          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_F6),    LCTL(BP_T),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_F7),    LGUI(BP_B),     LALT(LGUI(BP_B)),KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,                                        KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_0),    LCTL(LSFT(BP_G)),KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [15] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, TO(11),         TO(10),         KC_TRANSPARENT, TO(12),         KC_F12,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, TO(14),         TO(0),          TO(1),          TO(4),          KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        MAC_LOCK,       KC_SYSTEM_SLEEP,                                KC_TRANSPARENT, TO(2),          TO(3),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


const uint16_t PROGMEM combo0[] = { BP_I, BP_E, COMBO_END};
const uint16_t PROGMEM combo1[] = { BP_A, BP_U, COMBO_END};
const uint16_t PROGMEM combo2[] = { BP_X, BP_DOT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, OSL(9)),
    COMBO(combo1, OSL(14)),
    COMBO(combo2, OSL(11)),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case BP_DOT:
            return TAPPING_TERM -50;
        case MT(MOD_RSFT, BP_M):
            return TAPPING_TERM -50;
        case BP_Q:
            return TAPPING_TERM -50;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,255}, {42,255,255}, {23,255,255}, {124,174,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {243,222,234}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {243,222,234}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,200,235}, {205,255,255}, {42,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {23,255,255}, {42,255,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {243,222,234}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {243,222,234}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {243,222,234}, {0,0,255}, {243,222,234}, {0,0,255} },

    [1] = { {167,255,255}, {42,255,255}, {23,255,255}, {124,174,255}, {0,0,0}, {167,255,255}, {167,255,255}, {167,255,255}, {167,255,255}, {0,0,0}, {167,255,255}, {167,255,255}, {167,255,255}, {167,255,255}, {0,0,0}, {167,255,255}, {167,255,255}, {167,255,255}, {167,255,255}, {243,222,234}, {167,255,255}, {167,255,255}, {167,255,255}, {167,255,255}, {243,222,234}, {167,255,255}, {167,255,255}, {167,255,255}, {167,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {205,255,255}, {86,200,235}, {42,255,255}, {167,255,255}, {167,255,255}, {167,255,255}, {23,255,255}, {205,255,255}, {0,0,0}, {167,255,255}, {167,255,255}, {167,255,255}, {167,255,255}, {0,0,0}, {167,255,255}, {167,255,255}, {167,255,255}, {167,255,255}, {0,0,0}, {167,255,255}, {167,255,255}, {167,255,255}, {167,255,255}, {243,222,234}, {167,255,255}, {167,255,255}, {167,255,255}, {167,255,255}, {243,222,234}, {167,255,255}, {167,255,255}, {167,255,255}, {167,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {243,222,234}, {167,255,255}, {167,255,255}, {167,255,255} },

    [2] = { {0,0,168}, {42,255,255}, {23,255,255}, {124,174,255}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {86,200,235}, {205,255,255}, {42,255,255}, {0,0,168}, {0,0,168}, {0,0,168}, {23,255,255}, {42,255,255}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {0,0,168}, {243,222,234}, {0,0,168}, {243,222,234}, {0,0,168} },

    [3] = { {167,255,211}, {42,255,255}, {23,255,255}, {124,174,255}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {205,255,255}, {86,200,235}, {42,255,255}, {167,255,211}, {167,255,211}, {167,255,211}, {23,255,255}, {205,255,255}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {167,255,211}, {243,222,234}, {167,255,211}, {167,255,211}, {167,255,211} },

    [4] = { {96,215,208}, {96,215,208}, {23,255,255}, {124,174,255}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {42,255,255}, {96,215,208}, {86,200,235}, {42,255,255}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {42,255,255}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {96,215,208}, {243,222,234}, {96,215,208} },

    [5] = { {0,0,0}, {42,255,255}, {23,255,255}, {124,174,255}, {0,0,0}, {243,222,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {243,222,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {249,228,255}, {0,0,0}, {23,255,255}, {0,0,0}, {0,0,0}, {243,222,234}, {0,0,0}, {93,186,238}, {0,0,0}, {0,0,0}, {243,222,234}, {0,0,0}, {0,0,0}, {42,241,249}, {0,0,0}, {0,0,0}, {0,0,0}, {86,200,235}, {205,255,255}, {42,255,255}, {0,0,0}, {243,222,234}, {243,222,234}, {23,255,255}, {42,255,255}, {0,0,0}, {243,222,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {243,222,234}, {134,255,213}, {10,225,255}, {0,0,0}, {0,0,0}, {243,222,234}, {10,225,255}, {10,225,255}, {0,0,0}, {0,0,0}, {243,222,234}, {134,255,213}, {10,225,255}, {0,0,0}, {0,0,0}, {243,222,234}, {85,203,158}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {243,222,234}, {0,0,0}, {243,222,234}, {0,0,0} },

    [6] = { {0,0,0}, {42,255,255}, {23,255,255}, {124,174,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,200,235}, {205,255,255}, {42,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {23,255,255}, {42,255,255}, {0,0,0}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {30,222,255}, {0,0,0}, {134,255,213}, {0,0,0}, {0,0,0}, {30,222,255}, {0,0,0}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {243,222,234}, {0,0,0}, {243,222,234}, {0,0,0} },

    [7] = { {0,0,0}, {42,255,255}, {23,255,255}, {124,174,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {167,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {42,241,249}, {0,0,0}, {0,0,0}, {0,0,0}, {86,200,235}, {205,255,255}, {42,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {23,255,255}, {42,255,255}, {0,0,0}, {0,0,0}, {205,255,255}, {205,255,255}, {0,0,0}, {0,0,0}, {35,255,255}, {35,255,255}, {35,255,255}, {171,255,255}, {0,0,0}, {35,255,255}, {35,255,255}, {35,255,255}, {3,255,255}, {0,0,0}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {0,0,0}, {95,221,255}, {205,255,255}, {205,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {243,222,234}, {0,0,0}, {243,222,234}, {0,0,0} },

    [8] = { {0,0,0}, {42,255,255}, {23,255,255}, {124,174,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {167,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {42,241,249}, {0,0,0}, {0,0,0}, {0,0,0}, {86,200,235}, {205,255,255}, {42,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {23,255,255}, {42,255,255}, {0,0,0}, {0,0,0}, {85,203,158}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {243,222,234}, {243,222,234}, {0,0,0}, {0,0,0}, {0,0,0}, {10,225,255}, {10,225,255}, {0,0,0}, {0,0,0}, {0,0,0}, {32,176,255}, {32,176,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {243,222,234}, {0,0,0}, {243,222,234}, {0,0,0} },

    [9] = { {0,0,0}, {42,255,255}, {23,255,255}, {124,174,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {167,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {42,241,249}, {0,0,0}, {0,0,0}, {0,0,0}, {86,200,235}, {0,0,0}, {42,255,255}, {0,0,0}, {202,218,204}, {202,218,204}, {202,218,204}, {38,242,244}, {0,0,0}, {202,218,204}, {202,218,204}, {202,218,204}, {0,0,0}, {0,0,0}, {202,218,204}, {202,218,204}, {202,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {202,218,204}, {202,218,204}, {202,218,204}, {0,0,0}, {93,186,238}, {202,218,204}, {202,218,204}, {10,225,255}, {0,0,0}, {202,218,204}, {202,218,204}, {202,218,204}, {243,222,234}, {0,0,0}, {0,0,0}, {0,0,0}, {243,222,234}, {0,0,0}, {243,222,234}, {0,0,0} },

    [10] = { {0,0,0}, {0,0,0}, {23,255,255}, {124,174,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {95,221,255}, {205,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {167,255,255}, {205,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {205,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {42,241,249}, {0,0,0}, {0,0,0}, {0,0,0}, {86,200,235}, {205,255,255}, {42,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {23,255,255}, {42,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {95,221,255}, {0,0,0}, {0,0,0}, {0,0,0}, {205,255,255}, {180,255,233}, {0,0,0}, {0,0,0}, {205,255,255}, {180,255,233}, {180,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {205,255,255}, {180,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {39,255,255}, {95,221,255}, {39,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {243,222,234}, {0,0,0}, {243,222,234}, {0,0,0} },

    [11] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {95,221,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {167,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {42,241,249}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {35,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {105,255,255}, {249,228,255}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {35,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [12] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {167,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {42,241,249}, {0,0,0}, {0,0,0}, {0,0,0}, {134,255,213}, {134,255,213}, {10,225,255}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {105,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {249,228,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {85,203,158}, {32,176,255}, {10,225,255} },

    [14] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {167,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {42,241,249}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {205,255,255}, {85,255,193}, {0,0,0}, {0,0,0}, {124,173,255}, {205,255,255}, {85,255,193}, {0,0,0}, {0,0,0}, {124,173,255}, {205,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [15] = { {0,0,0}, {42,255,255}, {23,255,255}, {124,174,255}, {0,0,0}, {243,222,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {243,222,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {249,228,255}, {0,0,0}, {0,0,0}, {0,255,232}, {0,0,0}, {243,222,234}, {0,0,0}, {0,0,0}, {86,201,255}, {0,0,0}, {243,222,234}, {0,0,0}, {0,0,0}, {197,227,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,200,235}, {205,255,255}, {42,255,255}, {0,0,0}, {243,222,234}, {243,222,234}, {23,255,255}, {42,255,255}, {0,0,0}, {243,222,234}, {3,255,253}, {0,0,0}, {0,0,0}, {0,0,0}, {243,222,234}, {0,0,0}, {95,221,255}, {0,0,0}, {0,0,0}, {243,222,234}, {42,241,249}, {167,255,255}, {167,255,211}, {0,0,0}, {243,222,234}, {202,218,204}, {0,0,255}, {0,0,168}, {0,0,0}, {243,222,234}, {0,0,0}, {85,255,193}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {243,222,234}, {0,0,0}, {243,222,234}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
    case 9:
      set_layer_color(9);
      break;
    case 10:
      set_layer_color(10);
      break;
    case 11:
      set_layer_color(11);
      break;
    case 12:
      set_layer_color(12);
      break;
    case 14:
      set_layer_color(14);
      break;
    case 15:
      set_layer_color(15);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MAC_LOCK:
      HCS(0x19E);

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    case HSV_0_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,255,255);
        }
        return false;
    case HSV_86_255_128:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(86,255,128);
        }
        return false;
    case HSV_172_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(172,255,255);
        }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(BP_G));
        tap_code16(LCTL(BP_G));
        tap_code16(LCTL(BP_G));
    }
    if(state->count > 3) {
        tap_code16(LCTL(BP_G));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LCTL(BP_G)); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(BP_G))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(BP_G)); register_code16(LCTL(BP_G));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LCTL(BP_G)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(BP_G))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(BP_G)); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};
