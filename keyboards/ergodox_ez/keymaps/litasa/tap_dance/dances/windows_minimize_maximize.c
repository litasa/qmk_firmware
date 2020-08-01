
static uint8_t tap_state_windows_maximize_minimize = NO_ACTION;

void windows_minimize_maximize_finished(qk_tap_dance_state_t *state, void *user_data) {
    tap_state_windows_maximize_minimize = get_key_dance(state);
    switch(tap_state_windows_maximize_minimize)
    {
        case SINGLE_HOLD: //fallthrough
        case SINGLE_TAP:
            register_code(KC_LWIN);
            register_code(KC_D);
            break;
        case DOUBLE_HOLD: //fallthrough
        case DOUBLE_TAP:
            register_code(KC_LWIN);
            register_code(KC_LSHIFT);
            register_code(KC_M);
            break;
    }

}

void windows_minimize_maximize_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch(tap_state_windows_maximize_minimize)
    {
        case SINGLE_HOLD: // fallthrough
        case SINGLE_TAP:
            unregister_code(KC_D);
            unregister_code(KC_LWIN);
            break;
        case DOUBLE_HOLD: //fallthrough
        case DOUBLE_TAP:
            unregister_code(KC_M);
            unregister_code(KC_LSHIFT);
            unregister_code(KC_LWIN);
            break;
    }
}
