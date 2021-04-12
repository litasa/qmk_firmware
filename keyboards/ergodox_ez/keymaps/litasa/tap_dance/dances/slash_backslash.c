
static uint8_t tap_state_slash_backslash = NO_ACTION;

void slash_backslash_finished(qk_tap_dance_state_t *state, void *user_data) {
    tap_state_slash_backslash = get_key_dance(state);
    switch(tap_state_slash_backslash)
    {
        case SINGLE_TAP: register_code16(SE_SLSH); break;
        case DOUBLE_TAP: register_code16(SE_BSLS); break;
    }
}

void slash_backslash_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch(tap_state_slash_backslash)
    {
        case SINGLE_TAP: unregister_code16(SE_SLSH); break;
        case DOUBLE_TAP: unregister_code16(SE_BSLS); break;
    }
}
