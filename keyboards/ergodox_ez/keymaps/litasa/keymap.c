#include QMK_KEYBOARD_H
#include "version.h"

#include "keymap_nordic.h"
#include "keymap_swedish.h"

#include "tap_dance.c"

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,           SE_AMPR,             SE_LBRC,  SE_LCBR, SE_RCBR,   SE_LPRN, SE_AT,             /* r1 */           KC_HASH,   SE_EQL,   SE_ASTR, SE_RPRN, SE_PLUS, SE_RBRC,  KC_EXLM,
    LALT(LSFT(SE_SECT)), TD(COLON_SEMICOLON), KC_COMMA, KC_DOT,  KC_P,      KC_Y,    TO(2),             /* r2 */           KC_BSPACE, KC_F,     KC_G,    KC_C,    KC_R,    KC_L,     SE_SLSH,
    KC_TAB,              KC_A,                KC_O,     KC_E,    KC_U,      KC_I,                       /* r3 */                      KC_D,     KC_H,    KC_T,    KC_N,    KC_S,     TD(MINUS_UNDERSCORE),
    MO(1),               SE_APOS,             KC_Q,     KC_J,    KC_K,      KC_X,    OSL(2),            /* r4 */           OSL(1),    KC_B,     KC_M,    KC_W,    KC_V,    KC_Z,     SE_BSLS,
    KC_LCTRL,            MO(2),               KC_LCTRL, KC_LALT, KC_LSHIFT,                             /* r5 */                                KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, TO(2),
                                                                                    KC_LGUI, KC_DELETE, /* t1 */  KC_APPLICATION, TO(1),
                                                                                             KC_HOME,   /* t2 */  KC_PGUP,
                                                                        KC_SPACE, KC_BSPACE, KC_END,    /* t3 */  KC_PGDOWN,      MO(1),          KC_ENTER
  ),
  [1] = LAYOUT_ergodox_pretty(
    SE_TILD, KC_PERC, _______,  _______,             _______,              _______, SE_CIRC,        /* r1 */            SE_GRV,    _______, _______, _______, _______, _______, _______,
    _______, SE_COLN, SE_LESS,  SE_GRTR,             _______,              _______, _______,        /* r2 */            KC_BSPACE, _______, KC_1,    KC_2,    KC_3,    _______, SE_QUES,
    _______, _______, _______,  LCTL(LSFT(KC_LEFT)), LCTL(LSFT(KC_RIGHT)), _______,                 /* r3 */                       _______, KC_4,    KC_5,    KC_6,    KC_0,    SE_UNDS,
    _______, SE_DQUO, _______,  _______,             _______,              _______, _______,        /* r4 */            _______,   _______, KC_7,    KC_8,    KC_9,    _______, SE_PIPE,
    _______, _______, _______,  _______,             _______,                                       /* r5 */                                _______, _______, _______, _______, TO(0),
                                                                                _______, _______,   /* t1 */  _______, TO(0),
                                                                                         _______,   /* t2 */  _______,
                                                                    KC_SPACE, KC_ESCAPE, _______,   /* t3 */  _______, _______, KC_ENTER
  ),
  [2] = LAYOUT_ergodox_pretty(
    RESET,   _______, _______, _______, _______, _______, _______,            /* r1 */                      _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,            /* r2 */                      _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                     /* r3 */                               _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,            /* r4 */                      _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,                              /* r5 */                                        _______, _______, _______, _______, TO(0),
                                                            _______, _______, /* t1 */ _______, _______,
                                                                     _______, /* t2 */ _______,
                                                   _______, _______, _______, /* t3 */ _______, _______, _______
  ),
  //[2] = LAYOUT_ergodox_pretty(
  //  RESET,   _______, _______, _______, _______, _______, _______,            /* r1 */                      _______, _______, _______, _______, _______, _______, _______,
  //  _______, _______, _______, _______, _______, _______, _______,            /* r2 */                      _______, _______, _______, _______, _______, _______, _______,
  //  _______, _______, _______, _______, _______, _______,                     /* r3 */                               _______, _______, _______, _______, _______, _______,
  //  _______, _______, _______, _______, _______, _______, _______,            /* r4 */                      _______, _______, _______, _______, _______, _______, _______,
  //  _______, _______, _______, _______, _______,                              /* r5 */                                        _______, _______, _______, _______, TO(0),
  //                                                          _______, _______, /* t1 */ _______, _______,
  //                                                                   _______, /* t2 */ _______,
  //                                                 _______, _______, _______, /* t3 */ _______, _______, _______
  //),
};

uint32_t layer_state_set_user(uint32_t state) {
  uint8_t layer = biton32(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};
