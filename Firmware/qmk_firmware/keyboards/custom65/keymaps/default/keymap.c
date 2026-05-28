#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS]= {

    [_BASE] = LAYOUT(

        KC_GRV, KC_6, KC_EQL, KC_U, KC_J, KC_H, KC_Z,
        KC_M, KC_DOWN, KC_1, KC_7, KC_W, KC_I, KC_K,
        KC_G, KC_X, KC_COMM, KC_RGHT, KC_2, KC_8, KC_E,

        KC_O, KC_L, KC_F, KC_C, KC_DOT, KC_LEFT, KC_3,
        KC_9, KC_R, KC_P, KC_SCLN, KC_D, KC_V, KC_SLSH,
        KC_LCTL, KC_4, KC_0, KC_T, KC_LBRC, KC_QUOT, KC_SCLN

        KC_B, KC_UP, KC_LALT, KC_5, KC_MINS, KC_Y, KC_RBRC,
        KC_Q, KC_A, KC_N, KC_LGUI, KC_RCTL, MO(_FN), KC_BSLS,
        KC_TAB, KC_CAPS, KC_LSFT, KC_ENT, KC_RSFT, KC_BSPC, KC_SPC
    )
};

#ifdef OLED_ENABLE\

bool oled_task_user(void) {
    oled_write_ln_P(PSTR("Custom63"), false);
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_ln_P(PSTR("Base"), false);
            break;
        case _FN:
            oled_write_ln_P(PSTR("Fn"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undefined"), false);

    }
    return false;
}
#endif