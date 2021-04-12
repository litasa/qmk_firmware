
static uint8_t tap_state_colon_semicolon = NO_ACTION;

void colon_semicolon_finished(qk_tap_dance_state_t *state, void *user_data) {
    tap_state_colon_semicolon = get_key_dance(state);
    switch(tap_state_colon_semicolon)
    {
        case SINGLE_TAP: register_code16(SE_SCLN); break;
        case DOUBLE_TAP: register_code16(SE_COLN); break;
    }
}
void colon_semicolon_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch(tap_state_colon_semicolon)
    {
        case SINGLE_TAP: unregister_code16(SE_SCLN); break;
        case DOUBLE_TAP: unregister_code16(SE_COLN); break;
    }
}
