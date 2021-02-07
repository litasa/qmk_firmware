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

        // case SINGLE_TAP:
        //     break;
        // case SINGLE_HOLD:
        // case DOUBLE_TAP:
        // case DOUBLE_HOLD:
        //     layer_invert(MOVEMENT);
        //     break;
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

        // case SINGLE_TAP:
        //     if(layer_state_is(MOVEMENT))
        //         layer_off(MOVEMENT);
        //     else
        //         tap_code(SE_ODIA);
        //     break;
        // case SINGLE_HOLD:
        // case DOUBLE_HOLD:
        //     layer_off(MOVEMENT);
        //     break;
    }
}
