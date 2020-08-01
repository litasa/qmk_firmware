static bool was_tabbing = false;

void process_record_alt_tab( keyrecord_t *record)
{
    uint8_t temp_mod = get_mods();
    uint8_t temp_osm = get_oneshot_mods();
    bool alt_active = ((temp_mod | temp_osm) & MOD_MASK_ALT) != 0;

    if (!record->event.pressed)
    {
        unregister_code(KC_TAB);
        return;
    }

    if (!alt_active)
    {
        register_code(KC_LALT);
    }
    register_code(KC_TAB);
}

void process_record_alt_shift_tab( keyrecord_t *record)
{
    uint8_t temp_mod = get_mods();
    uint8_t temp_osm = get_oneshot_mods();
    bool alt_active = ((temp_mod | temp_osm) & MOD_MASK_ALT) != 0;
    bool shift_active = ((temp_mod | temp_osm) & MOD_MASK_SHIFT) != 0;

    if (!record->event.pressed)
    {
        unregister_code(KC_TAB);
        return;
    }

    if (!alt_active)
    {
        register_code(KC_LALT);
    }
    if (!shift_active)
    {
        register_code(KC_LSHIFT);
    }

    register_code(KC_TAB);

    unregister_code(KC_LSHIFT);
}

void process_alt_tab_or_alt_shift_tab(uint16_t keycode, keyrecord_t* record)
{
    bool going_to_tab = keycode == KC_ALT_TAB || keycode == KC_ALT_SHIFT_TAB;

    // Ensures that the alt key is held down until any other key then
    if (!going_to_tab)
    {
        if (was_tabbing)
        {
            uint8_t temp_mod = get_mods();
            uint8_t temp_osm = get_oneshot_mods();
            bool alt_active = ((temp_mod | temp_osm) & MOD_MASK_ALT) != 0;
            if (alt_active)
            {
                unregister_code(KC_LALT);
            }
            was_tabbing = false;
        }
        return;
    }

    switch (keycode)
    {
        case KC_ALT_TAB:
            process_record_alt_tab(record);
            break;
        case KC_ALT_SHIFT_TAB:
            process_record_alt_shift_tab(record);
            break;
    }
    was_tabbing = true;
}
