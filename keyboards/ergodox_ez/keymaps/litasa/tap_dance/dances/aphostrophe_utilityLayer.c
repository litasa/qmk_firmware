static uint8_t tap_state_aphostrophe_utilityLayer = NO_ACTION;

void aphostrophe_utilityLayer_finished(qk_tap_dance_state_t *state, void *user_data){
    tap_state_aphostrophe_utilityLayer = get_key_dance(state);
    switch(tap_state_aphostrophe_utilityLayer)
    {
        case SINGLE_TAP:
            break;
        case SINGLE_HOLD:
            layer_on(UTILITY);
            break;
    }
}

void aphostrophe_utilityLayer_reset(qk_tap_dance_state_t *state, void *user_data){
    switch(tap_state_aphostrophe_utilityLayer)
    {
        case SINGLE_TAP:
            tap_code(SE_APOS);
            break;
        case SINGLE_HOLD:
            layer_off(UTILITY);
            break;

    }
}
