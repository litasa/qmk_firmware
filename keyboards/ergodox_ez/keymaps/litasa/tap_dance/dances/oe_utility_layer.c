static uint8_t oe_utility_layer = NO_ACTION;

void oe_utility_layer_finished(qk_tap_dance_state_t *state, void *user_data){
    oe_utility_layer = get_key_dance(state);

    switch(oe_utility_layer)
    {
        case SINGLE_TAP:
            break;
        case SINGLE_HOLD:
            layer_on(UTILITY_NUMBER);
            break;
    }
}

void oe_utility_layer_reset(qk_tap_dance_state_t *state, void *user_data){
    switch(oe_utility_layer)
    {
        case SINGLE_TAP:
            tap_code(SE_ODIA);
            break;
        case SINGLE_HOLD:
            layer_off(UTILITY_NUMBER);
            break;
    }
}
