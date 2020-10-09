#include QMK_KEYBOARD_H
#include "version.h"

#include "keymap_nordic.h"
#include "keymap_swedish.h"

#include "layer/all_include.c"
#include "keycode/all_include.c"
#include "tap_dance/all_include.c"
#include "user/all_include.c"

#include "keymaps/all_include.c"



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    process_my_keycodes(keycode, record);
    return true;
}
