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
        FN17,    1,  2,   3,   4,   5,   MINS,
        FN10,   Q,  W,   E,   R,   T,   TAB,
        FN12,  A,  S,   D,   FN16,   G,
        FN15, Z,  X,   C,   V,   B,   BSPC,
        BSLS,FN0,FN2,PGUP,END,
                                      ESC,LBRC,
                                           MINS,
                                 SPC, ENT, NO,
        // right hand
             EQL,    6,   7,   8,   9,   0,   EQL,
             TAB,    Y,   U,   I,   O,   P,   FN7,
                     H,   FN18,   K,   L,   SCLN,FN13,
             DELETE, N,   M,   COMM,DOT, QUOT,FN15,
                       LEFT,DOWN,  FN3,FN1,SLSH,
        RBRC,ESC,
        EQL,
        NO, ENT, SPC
    ),

    KEYMAP(  // Layer F lock
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
     KEYMAP(  // Layer J lock
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
    KEYMAP(  // Layer D_CTL lock
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
     KEYMAP(  // Layer K_CTL lock
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
    [0] =   ACTION_MODS_KEY(MOD_LALT | MOD_LSFT, KC_TAB),    // FN0  - shift alt tab
    [1] =   ACTION_MODS_KEY(MOD_LALT, KC_TAB),              // FN1  - alt tab
    [2] =   ACTION_MODS_KEY(MOD_LCTL | MOD_LSFT, KC_TAB),    // FN2  - shift ctl tab
    [3] =   ACTION_MODS_KEY(MOD_LCTL, KC_TAB),              // FN3  - ctl tab
    [4] =   ACTION_MODS_TAP_KEY(MOD_LCTL, KC_F),            // FN4  - CTRL + F
    [5] =   ACTION_MODS_TAP_KEY(MOD_LSFT, KC_V),            // FN5  - SHIFT + V
    
    [6] =   ACTION_MODS_TAP_KEY(MOD_RALT, KC_0),            // FN6  - ALT + U
    [7] =   ACTION_MODS_TAP_KEY(MOD_RALT, KC_RBRC),            // FN7  - CTRL + J
    [8] =   ACTION_MODS_TAP_KEY(MOD_RSFT, KC_M),            // FN8  - SHIFT + M
    [9] =   ACTION_MODS_TAP_KEY(MOD_LALT, KC_R),            // FN9  - ALT + R
    [10] =   ACTION_MODS_TAP_KEY(MOD_LALT, KC_LBRC),            // FN10 - CTRL + F
    [11] =   ACTION_MODS_TAP_KEY(MOD_LSFT, KC_V),            // FN11  - SHIFT + V
    [12] =  ACTION_FUNCTION_TAP(LCTL_LPAREN), 
    [13] =  ACTION_FUNCTION_TAP(RCTL_LPAREN), 
    
    [14] =  ACTION_MODS_ONESHOT(MOD_LSFT), 
    [15] =  ACTION_MODS_ONESHOT(MOD_LSFT), 
    [16] =  ACTION_LAYER_TAP_KEY(1, KC_F),
    [17] =   ACTION_MODS_TAP_KEY(MOD_LGUI, KC_ESC), 
    [18] =  ACTION_LAYER_TAP_KEY(2, KC_J),    
    [19] =  ACTION_FUNCTION_TAP(D_CTL), 
    [20] =  ACTION_FUNCTION_TAP(K_CTL), 
    [21] =  ACTION_FUNCTION_TAP(S_ALT), 
    [22] =  ACTION_FUNCTION_TAP(L_ALT)
    // [6] =   ACTION_MODS_TAP_KEY(MOD_LSFT, KC_DEL),          // FN6  = LCtrl  with tap Delete
    // [7] =   ACTION_MODS_TAP_KEY(MOD_LALT, KC_ESC),          // FN7  = LAlt   with tap Escape
    // [8] =   ACTION_MODS_TAP_KEY(MOD_RALT, KC_INS),          // FN8  = RAlt   with tap Ins
    // [9] =   ACTION_MODS_TAP_KEY(MOD_RSFT, KC_ENT),          // FN9  = RShift with tap Enter
    // [10] =  ACTION_MODS_TAP_KEY(MOD_RCTL, KC_SPC),          // FN10 = RCtrl  with tap Space

    // [11] =  ACTION_MODS_TAP_KEY(MOD_LSFT, KC_TAB),          // FN11 = LShift with tap Tab
    // [12] =  ACTION_MODS_TAP_KEY(MOD_LCTL, KC_GRV),          // FN12 = LCtrl  with tap Tilda
    // [13] =  ACTION_MODS_TAP_KEY(MOD_LALT, KC_SPC),          // FN13 = LAlt   with tap Space
    // [14] =  ACTION_MODS_TAP_KEY(MOD_LGUI, KC_ESC),          // FN14 = LGui   with tap Escape
    // [15] =  ACTION_MODS_TAP_KEY(MOD_RSFT, KC_QUOT),         // FN15 = RShift with tap quotes
    // [16] =  ACTION_MODS_TAP_KEY(MOD_RCTL, KC_RBRC),         // FN16 = RCtrl  with tap ]

    // [17] =  ACTION_LAYER_SET(0, ON_BOTH),                   // FN17 - set Layer0
    // [18] =  ACTION_LAYER_SET(1, ON_BOTH),                   // FN18 - set Layer1, to use Workman layout at firmware level
    // [19] =  ACTION_LAYER_SET(2, ON_BOTH),                   // FN19 - set Layer2, to use with Numpad keys

    // [21] =  ACTION_FUNCTION_TAP(L_CTRL_ALT_ENT),            // FN21 - momentary Layer5+CTRL+ALT on Enter, to use with F* keys on top row
    // [22] =  ACTION_FUNCTION_TAP(R_CTRL_ALT_ENT),            // FN22 - momentary Layer6+CTRL+ALT on Enter, to use with F* keys on top row + utils

    // [28] =  ACTION_LAYER_TAP_KEY(4, KC_A),                  // FN28 = momentary Layer4 on A key, to use with unconvenient keys
    // [29] =  ACTION_LAYER_TAP_KEY(3, KC_S),                  // FN29 = momentary Layer3 on S key, to use with F* keys
    // [30] =  ACTION_LAYER_TAP_KEY(8, KC_D),                  // FN30 = momentary Layer8 on D key, to use with mouse and navigation keys
    // [31] =  ACTION_LAYER_TAP_KEY(2, KC_F),                  // FN31 = momentary Layer2 on F key, to use with Numpad keys

    // i'd like to remove this - will try to get used to live without this and convert them to usual keys
    // [20] =  ACTION_LAYER_MOMENTARY(2),                      // FN20 - momentary Layer2, to use with Numpad keys
// or
 // [20] =  ACTION_FUNCTION_TAP(CUSTOM_KEY),                // FN20 - use custom key, with tapping support

    // [23] =  ACTION_LAYER_TAP_KEY(7, KC_BSLS),               // FN23 - momentary Layer7 on ' , to use with F* keys (F1-F24)

    // [24] =  ACTION_LAYER_TAP_KEY(4, KC_Z),                  // FN24 = momentary Layer4 on Z key, to use with unconvenient keys
    // [25] =  ACTION_LAYER_TAP_KEY(3, KC_X),                  // FN25 = momentary Layer3 on X key, to use with F* keys
    // [26] =  ACTION_LAYER_TAP_KEY(8, KC_C),                  // FN26 = momentary Layer8 on C key, to use with mouse and navigation keys
    // [27] =  ACTION_LAYER_TAP_KEY(9, KC_V),                  // FN27 = momentary Layer9 on V key, to use with application-specific shortcuts
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