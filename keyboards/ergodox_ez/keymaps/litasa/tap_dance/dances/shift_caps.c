
static uint8_t tap_state_shift_caps = NO_ACTION;

void shift_caps_finished(qk_tap_dance_state_t *state, void *user_data) {
    tap_state_shift_caps = get_key_dance(state);
    switch(tap_state_shift_caps)
    {
        case SINGLE_TAP: register_code(KC_LSHIFT); break;
        case SINGLE_HOLD: register_code(KC_LSHIFT); break;
        case DOUBLE_TAP: register_code(KC_CAPSLOCK); break;
        case DOUBLE_HOLD: register_code(KC_LSHIFT); break;
    }
}

void shift_caps_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch(tap_state_shift_caps)
    {
        case SINGLE_TAP: unregister_code(KC_LSHIFT); break;
        case SINGLE_HOLD: unregister_code(KC_LSHIFT); break;
        case DOUBLE_TAP: unregister_code(KC_CAPSLOCK); break;
        case DOUBLE_HOLD: unregister_code(KC_LSHIFT); break;
    }
}
