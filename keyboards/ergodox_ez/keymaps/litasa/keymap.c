#include QMK_KEYBOARD_H
#include "version.h"

#include "keymap_nordic.h"
#include "keymap_swedish.h"

#include "keycode/all_include.c"
#include "layer/all_include.c"
#include "tap_dance/all_include.c"
#include "user/all_include.c"

#include "keymaps/all_include.c"



bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    process_alt_tab_or_alt_shift_tab(keycode, record);
    process_right_arrow_keycode(keycode, record);
    process_double_colon_keycode(keycode, record);
    process_tilde_keycode(keycode, record);
    return true;
}
