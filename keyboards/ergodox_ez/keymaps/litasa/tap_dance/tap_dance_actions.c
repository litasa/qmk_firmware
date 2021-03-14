qk_tap_dance_action_t tap_dance_actions[] = {
    [COLON_SEMICOLON] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, colon_semicolon_finished, colon_semicolon_reset),
    [MINUS_UNDERSCORE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, minus_underscore_finished, minus_underscore_reset),
    [APOSTHROPHE_MOVEMENT_LAYER] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, aphostrophe_movement_layer_finished, aphostrophe_movement_layer_reset),
    [WINDOW_MINIMIZE_MAXIMIZE] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, windows_minimize_maximize_finished, windows_minimize_maximize_reset, TAPPING_TERM + 100),
    [OE_UTILITY_LAYER] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, oe_utility_layer_finished, oe_utility_layer_reset),
};
