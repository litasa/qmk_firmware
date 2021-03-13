void process_tilde_keycode(uint16_t keycode, keyrecord_t* record)
{
    if (keycode != KC_MY_TILDE)
    {
        return;
    }

    if (!record->event.pressed)
    {
        return;
    }

    tap_code16(SE_TILD);
    tap_code(KC_SPACE);
}
