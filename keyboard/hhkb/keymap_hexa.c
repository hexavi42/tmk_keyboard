/*
 * HHKB Layout
 */
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * | ` |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Ins|Del|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |
     * |-----------------------------------------------------------|
     * |Fn0   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn1|
     * `-----------------------------------------------------------'
     *       |Ctrl| Alt|         Space         |Gui  |App|
     *       `-------------------------------------------'
     */
    KEYMAP(GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, INS,DEL,    \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,       \
           FN0 ,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,             \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,FN1,             \
                LCTL,LALT,          SPC,                RGUI,APP),

    /* Layer 1: Hexa mode (Mid Fn)
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Nlk|Pwr|
     * |-----------------------------------------------------------|
     * |     |   | Up|   |   |   |   | 7 | 8 | 9 |   | Up|   |Backs|
     * |-----------------------------------------------------------|
     * |      |Lft|Dwn|Rgt|   |   |   | 4 | 5 | 6 |Lft|Rgt|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   | 0 | 1 | 2 | 3 |Dwn|      |   |
     * `-----------------------------------------------------------'
     *       |    |    |                       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, LNUM, PWR,  \
           CAPS,TRNS, UP, TRNS,TRNS,TRNS,TRNS, P7 , P8 , P9 ,TRNS, UP, TRNS, BSPC,      \
           TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,PAST, P4 , P5 , P6 ,LEFT,RGHT,PENT,            \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, P0 , P1 , P2 , P3 ,DOWN,TRNS,TRNS,            \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer 2: Hexa mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Nlk|Pwr|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |      |VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |  +|  -|End|PgD|Dow|      |   |
     * `-----------------------------------------------------------'
     *       |    |    |                       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, LNUM, PWR,  \
           CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS, UP, TRNS, BSPC,      \
           TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,PENT,            \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,TRNS,TRNS,            \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),
    /* Layer 2: Hexa mode (Mouse Fn) TODO - mouse buttons right side
     * ,-----------------------------------------------------------.
     * |Esc|Out|MwU|Out|Out|Out|Out|Out|Out|Out|Out|Out|Out|Out|Out|
     * |-----------------------------------------------------------|
     * |Out  |Mb1|McU|Mb2|Out|Out|Out|Out|Out|Out|Out|Out|Out|Out  |
     * |-----------------------------------------------------------|
     * |MwL   |McL|McD|McR|MwR|Out|Out|Out|Out|Out|Out|Out|Out     |
     * |-----------------------------------------------------------|
     * |Out     |Out|MwDt|Out|Out|Out|Out|Out|Out|Out|Out|Out   |Out|
     * `-----------------------------------------------------------'
     *       | Out| Out|        Out            | Out |Out|
     *       `-------------------------------------------'
     */
};



/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const action_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
    [0]  = ACTION_LAYER_MOMENTARY(1),
    [1]  = ACTION_LAYER_MOMENTARY(2),
    [2]  = ACTION_LAYER_MOMENTARY(3),
    [3]  = ACTION_LAYER_MOMENTARY(4),
    [4]  = ACTION_LAYER_MOMENTARY(5),
    [5]  = ACTION_LAYER_MOMENTARY(6),
    [6]  = ACTION_LAYER_MOMENTARY(7),
    [7]  = ACTION_LAYER_TOGGLE(1),
    [8]  = ACTION_LAYER_TOGGLE(2),
    [9]  = ACTION_LAYER_TOGGLE(3),
    [10] = ACTION_LAYER_TAP_TOGGLE(1),
    [11] = ACTION_LAYER_TAP_TOGGLE(2),
    [12] = ACTION_LAYER_TAP_TOGGLE(3),
    [13] = ACTION_LAYER_TAP_KEY(1, KC_BSLASH),
    [14] = ACTION_LAYER_TAP_KEY(2, KC_TAB),
    [15] = ACTION_LAYER_TAP_KEY(3, KC_ENTER),
    [16] = ACTION_LAYER_TAP_KEY(4, KC_SPACE),
    [17] = ACTION_LAYER_TAP_KEY(5, KC_SCOLON),
    [18] = ACTION_LAYER_TAP_KEY(6, KC_QUOTE),
    [19] = ACTION_LAYER_TAP_KEY(7, KC_SLASH),
    [20] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_SPACE),
    [21] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_SPACE),
    [22] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_QUOTE),
    [23] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_ENTER),
    [24] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),
    [25] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_BSPACE),
    [26] = ACTION_MODS_ONESHOT(MOD_LCTL),
    [27] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_ESC),
    [28] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_BSPACE),
    [29] = ACTION_MODS_ONESHOT(MOD_LSFT),
    [30] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_GRAVE),
    [31] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_BSLASH),
};
#else
const action_t fn_actions[] PROGMEM = {
    [0]  = ACTION_LAYER_MOMENTARY(1),
};
#endif
