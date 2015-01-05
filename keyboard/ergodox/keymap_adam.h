static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Keymap: Default Layer in QWERTY
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   ~    |   1  |   2  |   3  |   4  |   5  |   \  |           |   -  |   6  |   7  |   8  |   9  |   0  |   =    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   Q  |   W  |   E  |   R  |   T  | ~L5  |           | ~L6  |   Y  |   U  |   I  |   O  |   P  |   [    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | Tab/Shf|   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
     * |--------+------+------+------+------+------|  L0  |           | ~L7  |------+------+------+------+------+--------|
     * | LCtrl  |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  |   ]    |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | ~L5  | ~L2  | Caps | LAlt | LGui |                                       |  Lft |  Up  |  Dn  | Rght | ~L6  |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | +L2  | Home |       | PgUp | Del  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |  End |       | PgDn |      |      |
     *                                 | BkSp |  ESC |------|       |------| Enter| Space|
     *                                 |      |      |  Spc |       | Ins  |      |      |
     *                                 `--------------------'       `--------------------'
     *
     *
     *
     */

    KEYMAP(  // Layer0: default, leftled:none
        // left hand
        FN6,    1,  2,   3,   4,   5,   MINS,
        FN1,    Q,  W,   E,   R,   T,   TAB,
        FN2,    A,  S,   FN8,   FN5, G,
        FN4,    Z,  X,   C,   V,   B,   BSPC,
        BSLS,SPC,SPC,SPC,SPC,
                                      ESC,LBRC,
                                           MINS,
                                 SPC, ENT, NO,
        // right hand
             EQL,    6,   7,   8,   9,   0,   EQL,
             TAB,    Y,   U,   I,   O,   P,   FN0,
                     H,   FN7, FN9,   L,   SCLN,FN3,
             DELETE, N,   M,   COMM,DOT, QUOT,FN4,
                       SPC,SPC,  SPC,SPC,SLSH,
        RBRC,ESC,
        EQL,
        NO, ENT, SPC
    ),

    KEYMAP(  // Layer 1 F lock
        // left hand
        TRNS,F1  ,F2  ,F3  ,F4  ,F5  ,F11,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 F,TRNS,TRNS,
        // right hand
             F12 ,F6  ,F7  ,F8  ,F9  ,F10 ,TRNS,
             TRNS,TRNS,HOME,PGUP,TRNS,TRNS,TRNS,
                  LEFT,DOWN,UP, RIGHT,TRNS,TRNS,
             TRNS,TRNS,END,PGDOWN,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,F
    ),
     KEYMAP(  // Layer 2 J lock
        // left hand
        TRNS,F1  ,F2  ,F3  ,F4  ,F5  ,F11,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 J,TRNS,TRNS,
        // right hand
             F12 ,F6  ,F7  ,F8  ,F9  ,F10 ,TRNS,
             TRNS,TRNS,HOME,PGUP,TRNS,TRNS,TRNS,
                  LEFT,TRNS,UP, RIGHT,TRNS,TRNS,
             TRNS,TRNS,END,PGDOWN,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,J
    ),
    KEYMAP(  // Layer 3 D_CTL lock
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 D,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,D
    ),
     KEYMAP(  // Layer  4 K_CTL lock
         // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 K,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,K
    ),
/*
    // templates to copy from

    KEYMAP(  // LayerN: transparent on edges + hard-defined thumb keys, all others are empty
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),
    KEYMAP(  // LayerN: fully transparent
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
*/

};
enum function_id {
    LCTL_LPAREN,
    RCTL_LPAREN,
    D_CTL,
    K_CTL,
    S_ALT,
    L_ALT
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    [0] =   ACTION_MODS_TAP_KEY(MOD_RALT, KC_RBRC),            // FN0  - CTRL + J
    [1] =   ACTION_MODS_TAP_KEY(MOD_LALT, KC_LBRC),            // FN1 - CTRL + F
    [2] =  ACTION_FUNCTION_TAP(LCTL_LPAREN),                   // FN2
    [3] =  ACTION_FUNCTION_TAP(RCTL_LPAREN),                   // FN3
    [4] =  ACTION_MODS_ONESHOT(MOD_LSFT),                    // FN4
    [5] =  ACTION_LAYER_TAP_KEY(1, KC_F),                   // FN5
    [6] =   ACTION_MODS_TAP_KEY(MOD_LGUI, KC_ESC),            // FN6
    [7] =  ACTION_LAYER_TAP_KEY(2, KC_J),                     // FN7  
    [8] =  ACTION_LAYER_TAP_KEY(3, KC_D),                         // FN8
    [9] =  ACTION_LAYER_TAP_KEY(4, KC_K),                          // FN9
    [10] =  ACTION_FUNCTION_TAP(S_ALT),                          // FN10
    [11] =  ACTION_FUNCTION_TAP(L_ALT)                         // FN11
};



/*
 * user defined action function
 */
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    // if (record->event.pressed) print("Press"); else print("Release");
    // if (record->tap.interrupted) print("interrupted");
    // print("\n");

    switch (id) {
        case LCTL_LPAREN:
            // Shift parentheses example: LShft + tap '('
            // http://stevelosh.com/blog/2012/10/a-modern-space-cadet/#shift-parentheses
            // http://geekhack.org/index.php?topic=41989.msg1304899#msg1304899
            if (record->event.pressed) {
                if (record->tap.count > 0 && !record->tap.interrupted) {
                    if (record->tap.interrupted) {
                        print("tap interrupted\n");
                        register_mods(MOD_BIT(KC_LCTL));
                    }
                } else {
                    register_mods(MOD_BIT(KC_LCTL));
                }
            } else {
                if (record->tap.count > 0 && !(record->tap.interrupted)) {
                    add_weak_mods(MOD_BIT(KC_LSHIFT));
                    send_keyboard_report();
                    register_code(KC_LBRACKET);
                    unregister_code(KC_LBRACKET);
                    del_weak_mods(MOD_BIT(KC_LSHIFT));
                    send_keyboard_report();
                    record->tap.count = 0;  // ad hoc: cancel tap
                } else {
                    unregister_mods(MOD_BIT(KC_LCTL));
                }
            }
            break;
            case RCTL_LPAREN:
            // Shift parentheses example: LShft + tap '('
            // http://stevelosh.com/blog/2012/10/a-modern-space-cadet/#shift-parentheses
            // http://geekhack.org/index.php?topic=41989.msg1304899#msg1304899
            if (record->event.pressed) {
                if (record->tap.count > 0 && !record->tap.interrupted) {
                    if (record->tap.interrupted) {
                        print("tap interrupted\n");
                        register_mods(MOD_BIT(KC_RCTL));
                    }
                } else {\
                    register_mods(MOD_BIT(KC_RCTL));
                }
            } else {
                if (record->tap.count > 0 && !(record->tap.interrupted)) {
                    add_weak_mods(MOD_BIT(KC_RSHIFT));
                    send_keyboard_report();
                    register_code(KC_RBRACKET);
                    unregister_code(KC_RBRACKET);
                    del_weak_mods(MOD_BIT(KC_RSHIFT));
                    send_keyboard_report();
                    record->tap.count = 0;  // ad hoc: cancel tap
                } else {
                    unregister_mods(MOD_BIT(KC_RCTL));
                }
            }
            break;
            case D_CTL:
            print("D_CTL\n");
            // CTRL + tap 'D'
            if (record->event.pressed) {
                if (record->tap.count > 0 && !record->tap.interrupted) {
                    if (record->tap.interrupted) {
                        print("tap interrupted\n");
                        register_mods(MOD_BIT(KC_RCTL));
                    }
                } else {\
                    print("typing ctl on keypress\n");
                    register_mods(MOD_BIT(KC_RCTL));
                }
            } else {
                if (record->tap.count > 0 && !(record->tap.interrupted)) {
                    print("typing d\n");
                    register_code(KC_D);
                    unregister_code(KC_D);
                    send_keyboard_report();
                    record->tap.count = 0;  // ad hoc: cancel tap
                } else {
                    print("typing ctl on release\n");
                    unregister_mods(MOD_BIT(KC_RCTL));
                }
            }
            break;
            case K_CTL:
            // CTRL + tap 'K'
            if (record->event.pressed) {
                if (record->tap.count > 0 && !record->tap.interrupted) {
                    if (record->tap.interrupted) {
                        print("tap interrupted\n");
                        register_mods(MOD_BIT(KC_RCTL));
                    }
                } else {\
                    register_mods(MOD_BIT(KC_RCTL));
                }
            } else {
                if (record->tap.count > 0 && !(record->tap.interrupted)) {
                    register_code(KC_K);
                    unregister_code(KC_K);
                    send_keyboard_report();
                    record->tap.count = 0;  // ad hoc: cancel tap
                } else {
                    unregister_mods(MOD_BIT(KC_RCTL));
                }
            }
            break;
            case S_ALT:
            // ALT + tap 'S'
            if (record->event.pressed) {
                if (record->tap.count > 0 && !record->tap.interrupted) {
                    if (record->tap.interrupted) {
                        print("tap interrupted\n");
                        register_mods(MOD_BIT(KC_LALT));
                    }
                } else {\
                    register_mods(MOD_BIT(KC_LALT));
                }
            } else {
                if (record->tap.count > 0 && !(record->tap.interrupted)) {
                    register_code(KC_S);
                    unregister_code(KC_S);
                    send_keyboard_report();
                    record->tap.count = 0;  // ad hoc: cancel tap
                } else {
                    unregister_mods(MOD_BIT(KC_LALT));
                }
            }
            break;
             case L_ALT:
            // ALT + tap 'L'
            if (record->event.pressed) {
                if (record->tap.count > 0 && !record->tap.interrupted) {
                    if (record->tap.interrupted) {
                        print("tap interrupted\n");
                        register_mods(MOD_BIT(KC_LALT));
                    }
                } else {\
                    register_mods(MOD_BIT(KC_LALT));
                }
            } else {
                if (record->tap.count > 0 && !(record->tap.interrupted)) {
                    register_code(KC_L);
                    unregister_code(KC_L);
                    send_keyboard_report();
                    record->tap.count = 0;  // ad hoc: cancel tap
                } else {
                    unregister_mods(MOD_BIT(KC_LALT));
                }
            }
            break;
    }
}