#include "custom_keycode_definitions.c"

#include "keycode_actions/alt_tab.c"
#include "keycode_actions/right_arrow.c"
#include "keycode_actions/double_colon.c"
#include "keycode_actions/tilde.c"
#include "keycode_actions/movement_layer.c"

void process_my_keycodes(uint16_t keycode, keyrecord_t* record)
{
    process_alt_tab_or_alt_shift_tab(keycode, record);
    process_right_arrow_keycode(keycode, record);
    process_double_colon_keycode(keycode, record);
    process_tilde_keycode(keycode, record);
    process_movement_layer(keycode, record);
}
