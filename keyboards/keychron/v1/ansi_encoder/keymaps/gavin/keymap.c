bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed && get_highest_layer(default_layer_state) == 2) {
        if (keycode == KC_LSFT && (get_mods() & MOD_BIT(KC_RSFT))) tap_code(KC_CAPS);
        if (keycode == KC_RSFT && (get_mods() & MOD_BIT(KC_LSFT))) tap_code(KC_CAPS);
    }
    return true;
}
