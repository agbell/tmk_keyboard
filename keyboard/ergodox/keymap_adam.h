static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    KEYMAP(  // Layer0: default, leftled:none
        // left hand
        FN6,    1,  2,   3,   4,   5,   MINS,
        FN1,    Q,  W,   E,   R,   T,   TAB,
        FN2,    FN12,  FN10,   FN8,   FN5, G,
        FN4,    Z,  X,   C,   V,   B,   BSPC,
        BSLS,GRAVE,SPC,SPC,SPC,
                                      ESC,LBRC,
                                           MINS,
                                 SPC, ENT, NO,
        // right hand
             EQL,    6,   7,   8,   9,   0,   EQL,
             TAB,    Y,   U,   I,   O,   P,   FN0,
                     H,   FN7, FN9,   FN11,   FN13,FN3,
             DELETE, N,   M,   COMM,DOT, QUOT,FN4,
                       SPC,SPC,  SPC,SPC,SLSH,
        RBRC,ESC,
        EQL,
        NO, ENT, SPC
    ),

    KEYMAP(  // Layer 1 F lock
        // left hand
        TRNS,F1  ,F2  ,F3  ,F4  ,F5  ,F11,
        TRNS,LBRC,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,FN14,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 F,TRNS,TRNS,
        // right hand
             F12 ,F6  ,F7  ,F8  ,F9  ,F10 ,TRNS,
             TRNS,TRNS,HOME,PGUP,TRNS,RBRC,TRNS,
                  LEFT,DOWN,UP, RIGHT,FN15,TRNS,
             TRNS,TRNS,END,PGDOWN,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,F
    ),
     KEYMAP(  // Layer 2 J lock
        // left hand
        TRNS,F1  ,F2  ,F3  ,F4  ,F5  ,F11,
        TRNS,LBRC,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 J,TRNS,TRNS,
        // right hand
             F12 ,F6  ,F7  ,F8  ,F9  ,F10 ,TRNS,
             TRNS,TRNS,HOME,PGUP,TRNS,RBRC,TRNS,
                  LEFT,TRNS,UP, RIGHT,TRNS,TRNS,
             TRNS,TRNS,END,PGDOWN,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,J
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
        TRNS,
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
    [0] =   ACTION_MODS_TAP_KEY(MOD_RALT, KC_RBRC),            
    [1] =   ACTION_MODS_TAP_KEY(MOD_LALT, KC_LBRC),           
    
    [2] =  ACTION_FUNCTION_TAP(LCTL_LPAREN),                   // FN2 CTRL & Paren
    [3] =  ACTION_FUNCTION_TAP(RCTL_LPAREN),                   // FN3 CTRL & Paren
    
    [4] =  ACTION_MODS_ONESHOT(MOD_LSFT),                      // FN4  One Shot Shift
    [5] =  ACTION_LAYER_TAP_KEY(1, KC_F),                      // FN5   F Lock Layer 
    [6] =   ACTION_MODS_TAP_KEY(MOD_LGUI, KC_ESC),             // FN6 Win Key + Esc   
    [7] =  ACTION_LAYER_TAP_KEY(2, KC_J),                      // FN7  J/F Lock Layer
    [8]   = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_D),
    [9]   = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_K),
    [10]   = ACTION_MODS_TAP_KEY(MOD_LALT, KC_S),   
    [11]   = ACTION_MODS_TAP_KEY(MOD_RALT, KC_L),
    [12]   = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_A),   
    [13]   = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_SCLN),
    
    [14]   = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
    [15]   = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),
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


/*
 * translates Fn keycode to action
 * for some layers, use different translation table
 */
action_t keymap_fn_to_action(uint8_t keycode)
{
    uint8_t layer = biton32(layer_state);
   
    action_t action;
    action.code = ACTION_NO;

    // by default, use fn_actions from debug_hexdefault layer 0
    // this is needed to get mapping for same key, that was used switch to some layer,
    // to have possibility to switch layers back
    if (action.code == ACTION_NO && FN_INDEX(keycode) < FN_ACTIONS_SIZE) {
        action.code = pgm_read_word(&fn_actions[FN_INDEX(keycode)]);
    }
    debug("FN:\t"); debug_dec(FN_INDEX(keycode));
    debug("\tLayer: \t"); debug_dec(layer); 
    debug("\tCode: \t"); debug_hex(action.code); 
    debug("\n");
    
    return action;
}

