
static uint8_t tap_state_minus_underscore = NO_ACTION;

void minus_underscore_finished(qk_tap_dance_state_t *state, void *user_data) {
    tap_state_minus_underscore = get_key_dance(state);
    switch(tap_state_minus_underscore)
    {
        case SINGLE_TAP: register_code16(SE_MINS); break;
        case DOUBLE_TAP: register_code16(SE_UNDS); break;
    }
}

void minus_underscore_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch(tap_state_minus_underscore)
    {
        case SINGLE_TAP: unregister_code16(SE_MINS); break;
        case DOUBLE_TAP: unregister_code16(SE_UNDS); break;
    }
}
