static uint8_t movement_layer_tap_hold = NO_ACTION;

void movement_layer_tap_hold_finished(qk_tap_dance_state_t *state, void *user_data){
    movement_layer_tap_hold = get_key_dance(state);
    switch(movement_layer_tap_hold)
    {
        case SINGLE_TAP:
            layer_on(MOVEMENT);
            break;
        case SINGLE_HOLD:
            layer_on(MOVEMENT);
            break;
    }
}

void movement_layer_tap_hold_reset(qk_tap_dance_state_t *state, void *user_data){
    switch(movement_layer_tap_hold)
    {
        case SINGLE_TAP:
            layer_off(MOVEMENT);
            break;
        case SINGLE_HOLD:
            layer_off(MOVEMENT);
            break;

    }
}
