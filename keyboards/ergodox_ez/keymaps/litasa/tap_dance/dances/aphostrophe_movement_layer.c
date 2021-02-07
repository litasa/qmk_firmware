static uint8_t tap_state_aphostrophe_movement_layer = NO_ACTION;

void aphostrophe_movement_layer_finished(qk_tap_dance_state_t *state, void *user_data){
    tap_state_aphostrophe_movement_layer = get_key_dance(state);
    switch(tap_state_aphostrophe_movement_layer)
    {
        case SINGLE_TAP:
            break;
        case SINGLE_HOLD:
        case DOUBLE_TAP:
        case DOUBLE_HOLD:
            layer_invert(MOVEMENT);
            break;

        // case SINGLE_TAP:
        //     break;
        // case SINGLE_HOLD:
        //     layer_on(UTILITY_NUMBER);
        //     break;
    }
}

void aphostrophe_movement_layer_reset(qk_tap_dance_state_t *state, void *user_data){
    switch(tap_state_aphostrophe_movement_layer)
    {
        case SINGLE_TAP:
            if(layer_state_is(MOVEMENT))
                layer_off(MOVEMENT);
            else
                tap_code(SE_APOS);
            break;
        case SINGLE_HOLD:
        case DOUBLE_HOLD:
            layer_off(MOVEMENT);
            break;
        // case SINGLE_TAP:
        //     tap_code(SE_APOS);
        //     break;
        // case SINGLE_HOLD:
        //     layer_off(UTILITY_NUMBER);
        //     break;
    }
}
