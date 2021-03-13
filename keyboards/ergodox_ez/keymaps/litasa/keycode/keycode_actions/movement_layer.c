void process_movement_layer(uint16_t keycode, keyrecord_t* record)
{
    if (keycode != KC_MY_MOVEMENT_LAYER)
    {
        return;
    }

    if (record->event.pressed)
    {
        layer_invert(MOVEMENT);
    }
}
