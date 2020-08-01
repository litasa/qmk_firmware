/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define AUTO_SHIFT_TIMEOUT 185

#undef TAPPING_TERM
#define TAPPING_TERM    175
#define TAPPING_TERM_PER_KEY
#define RETRO_TAPPING

#undef LED_BRIGHTNESS_DEFAULT
#define LED_BRIGHTNESS_DEFAULT (LED_BRIGHTNESS_LO)

#define NO_AUTO_SHIFT_SPECIAL
#define NO_AUTO_SHIFT_NUMERIC
