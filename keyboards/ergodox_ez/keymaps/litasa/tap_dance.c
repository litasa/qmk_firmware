enum tap_dance_declarations
{
  COLON_SEMICOLON,
  MINUS_UNDERSCORE,
};

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

#define SETUP_DANCE(NAME, KEY_SINGLE_TAP, KEY_SINGLE_HOLD, KEY_DOUBLE_TAP, KEY_DOUBLE_HOLD) \
static uint8_t tap_state_##NAME = NO_ACTION; \
void NAME##_finished(qk_tap_dance_state_t *state, void *user_data) { \
    tap_state_##NAME = get_key_dance(state); \
    switch(tap_state_##NAME) \
    { \
        case SINGLE_TAP: register_code16(KEY_SINGLE_TAP); break; \
        case SINGLE_HOLD: register_code(KEY_SINGLE_HOLD); break; \
        case DOUBLE_TAP: register_code16(KEY_DOUBLE_TAP); break; \
        case DOUBLE_HOLD: register_code(KEY_DOUBLE_HOLD); break; \
    } \
} \
void NAME##_reset(qk_tap_dance_state_t *state, void *user_data) { \
    switch(tap_state_##NAME) \
    { \
        case SINGLE_TAP: unregister_code16(KEY_SINGLE_TAP); break; \
        case SINGLE_HOLD: unregister_code(KEY_SINGLE_HOLD); break; \
        case DOUBLE_TAP: unregister_code16(KEY_DOUBLE_TAP); break; \
        case DOUBLE_HOLD: register_code(KEY_DOUBLE_HOLD); break; \
    }\
}

SETUP_DANCE(dance_minus_underscore, SE_UNDS, KC_NO, SE_MINS, KC_NO);
SETUP_DANCE(dance_colon_semicolon, SE_SCLN, KC_NO, SE_COLN, KC_NO);

qk_tap_dance_action_t tap_dance_actions[] = {
    [COLON_SEMICOLON] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_colon_semicolon_finished, dance_colon_semicolon_reset),
    [MINUS_UNDERSCORE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_minus_underscore_finished, dance_minus_underscore_reset),
};