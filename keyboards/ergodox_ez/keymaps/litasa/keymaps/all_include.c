const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_ergodox (
        // left hand
        KC_ESCAPE,          KC_1,                      KC_2,        KC_3,    KC_4,    KC_5, _______,
        MO(UTILITY_NUMBER), SE_ODIA,                   KC_L,        KC_DOT,  KC_P,    KC_Y, LALT(KC_G),
        KC_TAB,             KC_A,                      KC_O,        KC_E,    KC_I,    KC_U,
        KC_LSHIFT,     TD(APOSTHROPHE_UTILLAYER), KC_Q,        KC_J,    KC_K,    KC_X, KC_BSPACE,
        KC_LCTRL,           KC_LALT,                   MO(UTILITY_NUMBER), _______, KC_LGUI,
                              KC_LGUI, KC_DELETE,
                                       KC_ENTER,
        LSFT_T(KC_SPACE), KC_MY_MOVEMENT_LAYER, KC_BSPACE,

        // right hand
        _______,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     _______,
        RCS(KC_B),   KC_B,    KC_G,    KC_C,    KC_R,    KC_Z,     SE_ARNG,
                   KC_D,    KC_S,    KC_T,    KC_H,    KC_N,     SE_ADIA,
        KC_BSPACE, KC_F,    KC_M,    KC_W,    KC_V,    KC_COMMA, KC_RSHIFT,
                            KC_CAPSLOCK, _______, _______, _______,  _______,
        KC_APPLICATION, TO(QWERTY),
        _______,
        KC_DELETE, MO(SYMBOLS), LCTL_T(KC_ENTER)
    ),
    [SYMBOLS] = LAYOUT_ergodox (
        // left hand
        _______,  _______,          _______, _______,             _______, _______,             _______,
        _______, SE_AT,             SE_LABK, SE_HASH,             SE_RABK, KC_MY_TILDE,         _______,
        _______, KC_MY_ARROW_RIGHT, SE_LPRN, TD(COLON_SEMICOLON), SE_RPRN, KC_MY_DOUBLE_COLON,
        _______, _______,           SE_QUES, SE_ASTR,             SE_DQUO, _______,             _______,
        _______, _______,           _______, _______,             _______,
                              _______, _______,
                                       _______,
                     _______, _______, _______,

        // right hand
        _______, _______, _______, _______,              _______, _______, _______,
        _______, _______, SE_LBRC, TD(MINUS_UNDERSCORE), SE_RBRC, SE_PLUS, _______,
                 _______, SE_LCBR, SE_EQL,               SE_RCBR, SE_SLSH, _______,
        _______, _______, SE_AMPR, SE_PIPE,              SE_EXLM, SE_MINS, _______,
                          _______, _______,              _______, _______, TO(0),
        _______, _______,
        _______,
        _______, _______, _______
    ),
  [UTILITY_NUMBER] = LAYOUT_ergodox (
        // left hand
        RESET,   _______, _______, _______,          _______,    _______,                      LALT(KC_F4),
        _______, _______, _______, _______,          _______,    _______,                      _______,
        _______, _______, _______, KC_ALT_SHIFT_TAB, KC_ALT_TAB, TD(WINDOW_MINIMIZE_MAXIMIZE),
        _______, _______, _______, LCTL(KC_C),       LCTL(KC_V), LCTL(KC_X),   _______,
        _______, _______, _______, _______,          _______,
                              _______, _______,
                                       _______,
                     _______, _______, _______,

        // right hand
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______, KC_1,    KC_2,    KC_3,    _______, _______,
                 _______, KC_4,    KC_5,    KC_6,    KC_0,    _______,
        _______, _______, KC_7,    KC_8,    KC_9,    _______, _______,
                          _______, _______, _______, _______, TO(0),
        _______, _______,
        _______,
        _______, _______, _______
    ),
    [MOVEMENT] = LAYOUT_ergodox (
        // left hand
        _______, _______,  _______, _______,    _______,   _______,    _______,
        _______, _______,  _______, _______,    _______,   _______, TG(MOVEMENT),
        _______, KC_LEFT,  KC_DOWN, KC_UP,      KC_RIGHT,  _______,
        _______, _______, _______, LCTL(KC_C), LCTL(KC_V), LCTL(KC_X),    _______,
        _______, _______,  _______, _______, _______,
                                      _______, _______,
                                               _______,
                          KC_LSHIFT, _______, KC_MY_MOVEMENT_LAYER,

        // right hand
        _______,      _______, _______, _______, _______, _______, _______,
        TG(MOVEMENT), _______, LALT(LSFT(SE_EQL)), _______, _______, _______, _______,
                      _______, KC_RCTRL, KC_RSHIFT, _______, _______, _______,
        _______,      _______, LCTL(KC_C), LCTL(KC_V), LCTL(KC_X), _______, _______,
                               _______, _______, _______, _______, TO(0),
        TO(BASE), _______,
        _______,
        _______, _______, _______
    ),
    [QWERTY] = LAYOUT_ergodox (
        // left hand
        KC_ESC,    KC_1, KC_2, KC_3, KC_4, KC_5, SE_PLUS,
        KC_TAB,    SE_Q, SE_W, SE_E, SE_R, SE_T, TO(0),
        KC_CAPS,   SE_A, SE_S, SE_D, SE_F, SE_G,
        KC_LSHIFT, SE_Z, SE_X, SE_C, SE_V, SE_B, TO(0),
        KC_LCTRL,  _______, _______, _______, _______,
                              _______, _______,
                                       _______,
                     KC_SPACE, _______, _______,

        // right hand
        SE_ACUT, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPACE,
        TO(0),   SE_Y, SE_U, SE_I, SE_O, SE_P, SE_ARNG,
                 SE_H, SE_J, SE_K, SE_L, SE_ODIA, SE_ADIA,
        TO(0),   SE_N, SE_M, SE_COMM, SE_DOT, SE_MINS, KC_RSHIFT,
                          _______, _______, _______, _______, KC_RCTRL,
        _______, _______,
        _______,
        _______, _______, KC_ENTER
    ),
    // [UTILITY] = LAYOUT_ergodox (
    //     // left hand
    //     RESET,   _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______,
    //                           _______, _______,
    //                                    _______,
    //                  _______, _______, _______,

    //     // right hand
    //     _______, _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______, _______,
    //              _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______, _______,
    //                       _______, _______, _______, _______, TO(0),
    //     _______, _______,
    //     _______,
    //     _______, _______, _______
    // ),
};
