void process_right_arrow_keycode(uint16_t keycode, keyrecord_t* record)
{
    if (keycode != KC_MY_ARROW_RIGHT)
    {
        return;
    }

    if (!record->event.pressed)
    {
        return;
    }

    tap_code(SE_MINS);
    tap_code16(SE_RABK);
}
