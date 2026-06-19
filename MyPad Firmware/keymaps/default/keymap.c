#include QMK_KEYBOARD_H

#undef COMBO_COUNT
#define COMBO_COUNT 1

enum custom_layers {
    _NUMPAD = 0,
    _MEDIA  = 1
};

enum custom_keycodes {
    M_EMAIL = SAFE_RANGE,
    M_CODENAME
};

enum tap_dance_indexes {
    TD_COPY_PASTE = 0,
    TD_PLAY_MUTE
};

const uint16_t PROGMEM esc_combo[] = {KC_7, KC_9, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    COMBO(esc_combo, KC_ESC)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_NUMPAD] = LAYOUT(
        KC_7,               KC_8,               KC_9,
        KC_4,               KC_5,               KC_6,
        TD(TD_COPY_PASTE),  M_EMAIL,            MO(_MEDIA)
    ),
    [_MEDIA] = LAYOUT(
        KC_MPRV,            TD(TD_PLAY_MUTE),   KC_MNXT,
        LALT(KC_TAB),       M_CODENAME,         LGUI(KC_L),   
        KC_LGUI,            KC_TRNS,            KC_TRNS        
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case M_EMAIL:
            if (record->event.pressed) {
                SEND_STRING("example@example.com"); 
            }
            return false;
        case M_CODENAME:
            if (record->event.pressed) {
                SEND_STRING("Hello Team!");
            }
            return false;
    }
    return true;
}

tap_dance_action_t tap_dance_actions[] = {
    [TD_COPY_PASTE] = ACTION_TAP_DANCE_DOUBLE(LGUI(KC_C), LGUI(KC_V)),
    [TD_PLAY_MUTE]  = ACTION_TAP_DANCE_DOUBLE(KC_MPLY, KC_MUTE)
};

#if defined(ENCODER_ENABLE)
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (get_highest_layer(layer_state) == _MEDIA) {
            if (clockwise) {
                tap_code16(0x00CD); 
            } else {
                tap_code16(0x00CC); 
            }
        } else {
            if (clockwise) {
                tap_code16(KC_VOLU); 
            } else {
                tap_code16(KC_VOLD); 
            }
        }
    }
    return false;
}
#endif
