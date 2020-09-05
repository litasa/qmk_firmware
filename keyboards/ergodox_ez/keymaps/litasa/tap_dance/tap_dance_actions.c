qk_tap_dance_action_t tap_dance_actions[] = {
    [COLON_SEMICOLON] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, colon_semicolon_finished, colon_semicolon_reset),
    [MINUS_UNDERSCORE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, minus_underscore_finished, minus_underscore_reset),
    [APOSTHROPHE_UTILLAYER] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, aphostrophe_utilityLayer_finished, aphostrophe_utilityLayer_reset),
    [WINDOW_MINIMIZE_MAXIMIZE] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, windows_minimize_maximize_finished, windows_minimize_maximize_reset, TAPPING_TERM + 100),
    [MOVEMENT_LAYER_TAP_HOLD] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, movement_layer_tap_hold_finished, movement_layer_tap_hold_reset),
    [SHIFT_CAPS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, shift_caps_finished, shift_caps_reset),
};
