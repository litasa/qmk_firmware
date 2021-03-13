enum available_tap_dance_actions
{
    NO_ACTION,
    SINGLE_TAP,
    SINGLE_HOLD,
    TWO_SINGLE_TAPS,
    DOUBLE_TAP,
    DOUBLE_HOLD,
};

uint8_t get_key_dance(qk_tap_dance_state_t *state)
{
    if(state->count == 1) {
        if (state->interrupted || !state->pressed)
            return SINGLE_TAP;
        return SINGLE_HOLD;
    }
    else if(state->count == 2) {
        if(state->interrupted)
            return TWO_SINGLE_TAPS;
        return state->pressed? DOUBLE_HOLD : DOUBLE_TAP;
    }

    return NO_ACTION;
}
