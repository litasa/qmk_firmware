void process_double_colon_keycode(uint16_t keycode, keyrecord_t* record)
{
    if (keycode != KC_MY_DOUBLE_COLON)
    {
        return;
    }

    if (!record->event.pressed)
    {
        return;
    }

    tap_code16(SE_COLN);
    tap_code16(SE_COLN);
}
