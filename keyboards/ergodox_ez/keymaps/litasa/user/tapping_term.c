uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_T(KC_SPACE):
            return TAPPING_TERM + 1250;
        case LCTL_T(KC_ENTER):
            return TAPPING_TERM + 1250;
        default:
            return TAPPING_TERM;
    }
}
