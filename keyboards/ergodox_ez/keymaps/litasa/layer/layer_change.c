void set_led(uint32_t layer)
{
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
        case 1:
        ergodox_right_led_1_on();
        break;
        case 2:
        ergodox_right_led_2_on();
        break;
        case 3:
            ergodox_right_led_3_on();
        break;
        case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        break;
        case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        break;
        case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
        case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
        default:
        break;
    }
}

uint32_t layer_state_set_user(uint32_t state) {
  uint8_t layer = biton32(state);
  set_led(layer);
  return state;
};
