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
        ESC,    1,  2,   3,   4,   5,   MINS,
        FN12,   Q,  W,   E,   R,   T,   TAB,
        FN10,  A,  S,   D,   F,   G,
        LSHIFT, Z,  X,   C,   V,   B,   BSPC,
        BSLS,HOME,PGDN,PGUP,END,
                                      ESC,LBRC,
                                           MINS,
                                 SPC, ENT, NO,
        // right hand
             EQL,    6,   7,   8,   9,   0,   EQL,
             TAB,    Y,   U,   I,   O,   P,   FN6,
                     H,   J,   K,   L,   SCLN,FN7,
             DELETE, N,   M,   COMM,DOT, QUOT,RSHIFT,
                       LEFT,DOWN,  UP,RGHT,SLSH,
        RBRC,ESC,
        EQL,
        NO, ENT, SPC
    ),

    KEYMAP(  // Layer1: Workman layout, leftled:all
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,Q,   D,   R,   W,   B,   TRNS,
        TRNS,A,   S,   H,   T,   G,
        TRNS,Z,   X,   M,   C,   V,   TRNS,
        TRNS,TRNS,FN17,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,J,   F,   U,   P,   4,   TRNS,
                  Y,   N,   E,   O,   I,   TRNS,
             TRNS,K,   L,   TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer2: numpad, leftled:mid/blue
        // left hand
        TRNS,NO,  NO,  NO,  NO,  PAUS,PSCR,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  TRNS,NO,
        TRNS,NO,  NO,  NO,  TRNS,NO,  TRNS,
        TRNS,TRNS,FN17,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             SLCK,NLCK,PSLS,PAST,PAST,PMNS,BSPC,
             TRNS,NO,  P7,  P8,  P9,  PMNS,PGUP,
                  NO,  P4,  P5,  P6,  PPLS,PGDN,
             TRNS,NO,  P1,  P2,  P3,  PPLS,PENT,
                       P0,  PDOT,SLSH,PENT,PENT,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer3: F-keys + PgUp/PgDn on right hand, leftled:bot/green
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  TRNS,NO,  NO,  NO,
        TRNS,NO,  TRNS,NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  F1,  F2,  F3,  F4,  PGUP,
                  NO,  F5,  F6,  F7,  F8,  PGDN,
             TRNS,NO,  F9,  F10, F11, F12, APP,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),

    KEYMAP(  // Layer4: unconvenient keys on right hand, leftled:top/white
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,NO,  NO,  NO,  NO,
        TRNS,TRNS,NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,

        /* in Workman right hand will be:
                { } ( ) +
              ^ ! ?     =
              ' ! $ " ; \
              # [ < > ] \
        */

        // right hand
             NO,  NO,  4,   5,   9,   0,   PPLS,
             TRNS,MINS,2,   FN5, 9,   0,   EQL,
                  BSLS,2,   P,   FN1, 1,   FN2,
             TRNS,3,   6,   FN3, FN4, 7,   FN2,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer5: F-keys instead of numbers, leftled:top/white
        // left hand
        TRNS,F1,  F2,  F3,  F4,  F5,  F6,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             F7,  F8,  F9,  F10, F11, F12, TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer6: F-keys + utils(Teensy, Workman-layer switch), leftled:top/white+onboard
        // left hand
        TRNS,F1,  F2,  F3,  F4,  F5,  F6,
        FN0, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        FN18,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             F7,  F8,  F9,  F10, F11, F12, TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN0,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    //
    // rarely used
    //

    KEYMAP(  // Layer7: F-keys only, leftled:top/white
        // left hand
        FN0, NO,  NO,  NO,  NO,  NO,  NO,
        FN1, F13, F14, F15, F16, NO,  TRNS,
        TRNS,F17, F18, F19, F20, NO,
        TRNS,F21, F22, F23, F24, NO,  TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  F1,  F2,  F3,  F4,  TRNS,
                  NO,  F5,  F6,  F7,  F8,  TRNS,
             TRNS,NO,  F9,  F10, F11, F12, TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        SLEP,TRNS,TRNS
    ),

    KEYMAP(  // Layer8: mouse and navigation, leftled:mid/blue+bot/green
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  ACL0,NO,  TRNS,
        TRNS,NO,  NO,  TRNS,ACL1,NO,
        TRNS,NO,  NO,  TRNS,ACL2,NO,  TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,

        // right hand
             F16, MPLY,MPRV,MNXT,VOLD,VOLU,MUTE,
             F14, BTN2,WH_L,WH_U,WH_D,WH_R,PGUP,
                  BTN1,MS_L,MS_U,MS_D,MS_R,PGDN,
             F15, BTN3,HOME,END, DEL, INS, NO,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer9: application-specific shortcuts (mostly browser), leftled:top/white+bot/green
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  TRNS,NO,  TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  FN12,FN13,FN14,FN15,FN10,
                  FN1, FN2, FN3, FN4, FN5, FN11,
             TRNS,TRNS,FN6, FN7, FN8, FN9, FN0,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
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
    LALT_LPAREN,
    RALT_RPAREN
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    [0] =   ACTION_MODS_TAP_KEY(MOD_RALT, KC_U),            // FN0  - ALT + U
    [1] =   ACTION_MODS_TAP_KEY(MOD_RCTL, KC_J),            // FN1  - CTRL + J
    [2] =   ACTION_MODS_TAP_KEY(MOD_RSFT, KC_M),            // FN2  - SHIFT + M
    [3] =   ACTION_MODS_TAP_KEY(MOD_LALT, KC_R),            // FN3  - ALT + R
    [4] =   ACTION_MODS_TAP_KEY(MOD_LCTL, KC_F),            // FN4  - CTRL + F
    [5] =   ACTION_MODS_TAP_KEY(MOD_LSFT, KC_V),            // FN5  - SHIFT + V
    
    [6] =   ACTION_MODS_TAP_KEY(MOD_RALT, KC_0),            // FN6  - ALT + U
    [7] =   ACTION_MODS_TAP_KEY(MOD_RCTL, KC_RBRC),            // FN7  - CTRL + J
    [8] =   ACTION_MODS_TAP_KEY(MOD_RSFT, KC_M),            // FN8  - SHIFT + M
    [9] =   ACTION_MODS_TAP_KEY(MOD_LALT, KC_R),            // FN9  - ALT + R
    [10] =   ACTION_MODS_TAP_KEY(MOD_LCTL, KC_LBRC),            // FN10 - CTRL + F
    [11] =   ACTION_MODS_TAP_KEY(MOD_LSFT, KC_V),            // FN11  - SHIFT + V
    [12] =  ACTION_FUNCTION_TAP(LALT_LPAREN), 
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
    if (record->event.pressed) dprint("P"); else dprint("R");
    dprintf("%d", record->tap.count);
    if (record->tap.interrupted) dprint("i");
    dprint("\n");

    switch (id) {
        case LALT_LPAREN:
            // Shift parentheses example: LShft + tap '('
            // http://stevelosh.com/blog/2012/10/a-modern-space-cadet/#shift-parentheses
            // http://geekhack.org/index.php?topic=41989.msg1304899#msg1304899
            if (record->event.pressed) {
                if (record->tap.count > 0 && !record->tap.interrupted) {
                    if (record->tap.interrupted) {
                        dprint("tap interrupted\n");
                        register_mods(MOD_BIT(KC_LALT));
                    }
                } else {
                    register_mods(MOD_BIT(KC_LALT));
                }
            } else {
                if (record->tap.count > 0 && !(record->tap.interrupted)) {
                    add_weak_mods(MOD_BIT(KC_LSHIFT));
                    send_keyboard_report();
                    register_code(KC_9);
                    unregister_code(KC_9);
                    del_weak_mods(MOD_BIT(KC_LSHIFT));
                    send_keyboard_report();
                    record->tap.count = 0;  // ad hoc: cancel tap
                } else {
                    unregister_mods(MOD_BIT(KC_LALT));
                }
            }
            break;
    }
}