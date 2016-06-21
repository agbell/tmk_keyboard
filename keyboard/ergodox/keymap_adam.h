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
        FN2,    A,  FN10,   FN8,   FN5, G,
        FN4,    Z,  X,   C,   V,   B,   BSPC,
        BSLS,GRAVE,SPC,SPC,SPC,
                                      ESC,LBRC,
                                           MINS,
                                 SPC, ENT, NO,
        // right hand
             EQL,    6,   7,   8,   9,   0,   EQL,
             TAB,    Y,   U,   I,   O,   P,   FN0,
                     H,   FN7, FN9,   FN11,   SCLN,FN3,
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
     KEYMAP(  // Layer  3 D_CTL lock
         // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,FN0, FN1, FN2, FN3, FN4, FN27,
        TRNS,FN10,FN11,FN31,FN13,FN14,
        TRNS,FN20,FN21,FN22,FN23,FN24,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      FN28,FN29,
                                           TRNS,
                                 D,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             FN27,FN5, FN6, FN7, FN8, FN9, TRNS,
                  FN15,FN16,FN17,FN18,FN19, TRNS,
             TRNS,FN25,FN26,TRNS,TRNS,TRNS, TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        FN28,FN29,
        TRNS,
        TRNS,TRNS,D
    ),
     KEYMAP(  // Layer  4 K_CTL lock
         // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,FN0, FN1, FN2, FN3, FN4, FN27,
        TRNS,FN10,FN11,FN12,FN13,FN14,
        TRNS,FN20,FN21,FN22,FN23,FN24,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      FN28,FN29,
                                           TRNS,
                                 D,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             FN27,FN5, FN6, FN7, FN8, FN9, TRNS,
                  FN15,FN16,FN30,FN18,FN19, TRNS,
             TRNS,FN25,FN26,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        FN29,FN28,
        TRNS,
        TRNS,TRNS,K
    ),
     KEYMAP(  // Layer  5 S_ALT lock
         // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,FN0, FN1, FN2, FN3, FN4, FN27,
        TRNS,FN10,FN31,FN12,FN13,FN14,
        TRNS,FN20,FN21,FN22,FN23,FN24,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      FN28,FN29,
                                           TRNS,
                                 S,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             FN27,FN5, FN6, FN7, FN8, FN9, TRNS,
                  FN15,FN16,FN17,FN18,FN19, TRNS,
             TRNS,FN25,FN26,TRNS,TRNS,TRNS, TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        FN28,FN29,
        TRNS,
        TRNS,TRNS,S
    ),
     KEYMAP(  // Layer  6 L_ALT lock
         // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,FN0, FN1, FN2, FN3, FN4, FN27,
        TRNS,FN10,FN11,FN12,FN13,FN14,
        TRNS,FN20,FN21,FN22,FN23,FN24,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      FN28,FN29,
                                           TRNS,
                                 L,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             FN27,FN5, FN6, FN7, FN8, FN9, TRNS,
                  FN15,FN16,FN17,FN30,FN19, TRNS,
             TRNS,FN25,FN26,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        FN29,FN28,
        TRNS,
        TRNS,TRNS,L
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
             NO,  NO,  NO,  NO, NO,  NO,  TRNS,
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
        TRNS,]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]
        TRNS,TRNS,TRNS
    ),
*/

};
enum function_id {
    LCTL_LPAREN,
    RCTL_LPAREN
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
    
    [8]   = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_D),
    //[8] =  ACTION_LAYER_TAP_KEY(3, KC_D),                         // FN8
    
    [9]   = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_K),
    //[9] =  ACTION_LAYER_TAP_KEY(4, KC_K),                            //FN9
   
    [10]   = ACTION_MODS_TAP_KEY(MOD_LALT, KC_S),   
    //[10] =  ACTION_LAYER_TAP_KEY(5, KC_S),    // FN8
    
    [11]   = ACTION_MODS_TAP_KEY(MOD_RALT, KC_L),   
    //[11] =  ACTION_LAYER_TAP_KEY(6, KC_L),                            //FN9
    [31] =  ACTION_LAYER_TAP_KEY(1, KC_F),  
};


static const uint16_t PROGMEM fn_actions_ctl [] = {
   [30] =  ACTION_LAYER_TAP_KEY(4, KC_K), //K return function
   [31] =  ACTION_LAYER_TAP_KEY(3, KC_D),  // D return function
   [0] =   ACTION_MODS_KEY(MOD_LCTL, KC_Q),
   [1] =   ACTION_MODS_KEY(MOD_LCTL, KC_W),
   [2] =   ACTION_MODS_KEY(MOD_LCTL, KC_E),
   [3] =   ACTION_MODS_KEY(MOD_LCTL, KC_R),
   [4] =   ACTION_MODS_KEY(MOD_LCTL, KC_T),
   [5] =   ACTION_MODS_KEY(MOD_LCTL, KC_Y),
   [6] =   ACTION_MODS_KEY(MOD_LCTL, KC_U),
   [7] =   ACTION_MODS_KEY(MOD_LCTL, KC_I),
   [8] =   ACTION_MODS_KEY(MOD_LCTL, KC_O),
   [9] =   ACTION_MODS_KEY(MOD_LCTL, KC_P),
   [10] =   ACTION_MODS_KEY(MOD_LCTL, KC_A),
   [11] =   ACTION_MODS_KEY(MOD_LCTL, KC_S),
   [12] =   ACTION_MODS_KEY(MOD_LCTL, KC_D),
   [13] =   ACTION_MODS_KEY(MOD_LCTL, KC_F),
   [14] =   ACTION_MODS_KEY(MOD_LCTL, KC_G),
   [15] =   ACTION_MODS_KEY(MOD_LCTL, KC_H),
   [16] =   ACTION_MODS_KEY(MOD_LCTL, KC_J),
   [17] =   ACTION_MODS_KEY(MOD_LCTL, KC_K),
   [18] =   ACTION_MODS_KEY(MOD_LCTL, KC_L),
   [19] =   ACTION_MODS_KEY(MOD_LCTL, KC_X),
   [20] =   ACTION_MODS_KEY(MOD_LCTL, KC_Z),
   [21] =   ACTION_MODS_KEY(MOD_LCTL, KC_X),
   [22] =   ACTION_MODS_KEY(MOD_LCTL, KC_C),
   [23] =   ACTION_MODS_KEY(MOD_LCTL, KC_V),
   [24] =   ACTION_MODS_KEY(MOD_LCTL, KC_B),
   [25] =   ACTION_MODS_KEY(MOD_LCTL, KC_N),
   [26] =   ACTION_MODS_KEY(MOD_LCTL, KC_M),
   [27] =   ACTION_MODS_KEY(MOD_LCTL, KC_TAB),
   [28] =   ACTION_MODS_KEY(MOD_LCTL, KC_ENTER),
   [29] =   ACTION_MODS_KEY(MOD_LCTL, KC_SPACE)
};

static const uint16_t PROGMEM fn_actions_alt [] = {
   [30] =  ACTION_LAYER_TAP_KEY(6, KC_L), //L return function
   [31] =  ACTION_LAYER_TAP_KEY(5, KC_S),  // S return function
   [0] =   ACTION_MODS_KEY(MOD_LALT, KC_Q),
   [1] =   ACTION_MODS_KEY(MOD_LALT, KC_W),
   [2] =   ACTION_MODS_KEY(MOD_LALT, KC_E),
   [3] =   ACTION_MODS_KEY(MOD_LALT, KC_R),
   [4] =   ACTION_MODS_KEY(MOD_LALT, KC_T),
   [5] =   ACTION_MODS_KEY(MOD_LALT, KC_Y),
   [6] =   ACTION_MODS_KEY(MOD_LALT, KC_U),
   [7] =   ACTION_MODS_KEY(MOD_LALT, KC_I),
   [8] =   ACTION_MODS_KEY(MOD_LALT, KC_O),
   [9] =   ACTION_MODS_KEY(MOD_LALT, KC_P),
   [10] =   ACTION_MODS_KEY(MOD_LALT, KC_A),
   [11] =   ACTION_MODS_KEY(MOD_LALT, KC_S),
   [12] =   ACTION_MODS_KEY(MOD_LALT, KC_D),
   [13] =   ACTION_MODS_KEY(MOD_LALT, KC_F),
   [14] =   ACTION_MODS_KEY(MOD_LALT, KC_G),
   [15] =   ACTION_MODS_KEY(MOD_LALT, KC_H),
   [16] =   ACTION_MODS_KEY(MOD_LALT, KC_J),
   [17] =   ACTION_MODS_KEY(MOD_LALT, KC_K),
   [18] =   ACTION_MODS_KEY(MOD_LALT, KC_L),
   [19] =   ACTION_MODS_KEY(MOD_LALT, KC_X),
   [20] =   ACTION_MODS_KEY(MOD_LALT, KC_Z),
   [21] =   ACTION_MODS_KEY(MOD_LALT, KC_X),
   [22] =   ACTION_MODS_KEY(MOD_LALT, KC_C),
   [23] =   ACTION_MODS_KEY(MOD_LALT, KC_V),
   [24] =   ACTION_MODS_KEY(MOD_LALT, KC_B),
   [25] =   ACTION_MODS_KEY(MOD_LALT, KC_N),
   [26] =   ACTION_MODS_KEY(MOD_LALT, KC_M),
   [27] =   ACTION_MODS_KEY(MOD_LALT, KC_TAB),
   [28] =   ACTION_MODS_KEY(MOD_LALT, KC_ENTER),
   [29] =   ACTION_MODS_KEY(MOD_LALT, KC_SPACE)
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
    }
}

#define FN_ACTIONS_SIZE     (sizeof(fn_actions)   / sizeof(fn_actions[0]))
#define FN_ACTIONS_CTL_SIZE   (sizeof(fn_actions_ctl) / sizeof(fn_actions_ctl[0]))
#define FN_ACTIONS_ALT_SIZE   (sizeof(fn_actions_alt) / sizeof(fn_actions_alt[0]))


/*
 * translates Fn keycode to action
 * for some layers, use different translation table
 */
action_t keymap_fn_to_action(uint8_t keycode)
{
    uint8_t layer = biton32(layer_state);
   
    action_t action;
    action.code = ACTION_NO;

    // CTRL Layer
    if ((layer == 3 || layer == 4) && FN_INDEX(keycode) < FN_ACTIONS_CTL_SIZE) {
        action.code = pgm_read_word(&fn_actions_ctl[FN_INDEX(keycode)]);
    } 
    // ALT Layer
    else if ((layer == 5 || layer == 6) && FN_INDEX(keycode) < FN_ACTIONS_ALT_SIZE) {
        action.code = pgm_read_word(&fn_actions_alt[FN_INDEX(keycode)]);
    } 
    // by default, use fn_actions from debug_hexdefault layer 0
    // this is needed to get mapping for same key, that was used switch to some layer,
    // to have possibility to switch layers back
    else if (action.code == ACTION_NO && FN_INDEX(keycode) < FN_ACTIONS_SIZE) {
        action.code = pgm_read_word(&fn_actions[FN_INDEX(keycode)]);
    }
    debug("FN:\t"); debug_dec(FN_INDEX(keycode));
    debug("\tLayer: \t"); debug_dec(layer); 
    debug("\tCode: \t"); debug_hex(action.code); 
    debug("\n");
    
    return action;
}

