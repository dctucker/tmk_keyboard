#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* layer 0 */
    KEYMAP(
         FN2,  FN1,  ESC,  GRV,    1,    2,    3,    4,    5,    6,    7,    8,    9,    0, MINS,  EQL, BSPC,  INS, HOME, PGUP, \
          F7,   F8,   F9,  TAB,    Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P, LBRC, RBRC, BSLS,  DEL,  END, PGDN, \
          F4,   F5,   F6,  FN3,          A,    S,    D,    F,    G,    H,    J,    K,    L, SCLN, QUOT,        F13,  F14,  F15, \
          F1,   F2,   F3,                Z,    X,    C,    V,    B,    N,    M, COMM,  DOT, SLSH,              F17,   UP,  F18, \
         F10,  F11,  F12,                                            SPC,                                ENT, LEFT, DOWN, RGHT, \
                          LCTL, LSFT, LALT, LGUI,                                     RGUI, RALT, RSFT, RCTL                    ),
    /* layer 1 */
    KEYMAP(
         FN0, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PMNS, PPLS, TRNS, PSLS, PAST, PMNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PEQL,   P7,   P8,   P9, \
        TRNS, TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,         P4,   P5,   P6, \
        TRNS, TRNS, TRNS,             TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PDOT, PSLS,               P1,   P2,   P3, \
        TRNS, TRNS, TRNS,                                           TRNS,                               PENT,   P0, PDOT, PPLS, \
                          TRNS, TRNS, TRNS, TRNS,                                     TRNS, BTN2, TRNS, BTN1                    ),
    /* layer 2 */
    KEYMAP(
        TRNS, TRNS, TRNS, EJCT, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        MRWD, MPLY, MFFD, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
         F16, MSTP,  F19, TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS, \
        MAIL, CALC,  F20,             TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PDOT, PSLS,             TRNS, TRNS, TRNS, \
        MUTE, VOLD, VOLU,                                           TRNS,                               TRNS, TRNS, TRNS, TRNS, \
                          TRNS, TRNS, TRNS, TRNS,                                     TRNS, TRNS, TRNS, TRNS                    ),
    /* layer 3 */
    KEYMAP(
        TRNS, TRNS, TRNS, EJCT, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PMNS, PPLS, TRNS, PSLS, PAST, PMNS, \
        MRWD, MPLY, MFFD, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PEQL,   P7,   P8,   P9, \
         F16, MSTP,  F19, TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,         P4,   P5,   P6, \
        MAIL, CALC,  F20,             TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PDOT, PSLS,               P1,   P2,   P3, \
        MUTE, VOLD, VOLU,                                           TRNS,                               PENT,   P0, PDOT, PPLS, \
                          TRNS, TRNS, TRNS, TRNS,                                     TRNS, BTN2, TRNS, BTN1                    ),
    /* layer 4 */
    KEYMAP(
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, LEFT, DOWN,   UP, RGHT, TRNS, TRNS,       TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS,             TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,             TRNS, MS_U, TRNS, \
        TRNS, TRNS, TRNS,                                           TRNS,                                ESC, MS_L, MS_D, MS_R, \
                          TRNS, TRNS, TRNS, TRNS,                                     TRNS, TRNS, TRNS, TRNS                    ),
    /* layer 5 */
    KEYMAP(
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, MINS,  EQL, TRNS,  INS, HOME, PGUP, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, LBRC, RBRC, BSLS,  DEL,  END, PGDN, \
        TRNS, TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, SCLN, QUOT,        F13,  F14,  F15, \
        TRNS, TRNS, TRNS,             TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  DOT, SLSH,              F17,   UP,  F18, \
        TRNS, TRNS, TRNS,                                           TRNS,                                ENT, LEFT, DOWN, RGHT, \
                          TRNS, TRNS, TRNS, TRNS,                                     TRNS, TRNS, TRNS, TRNS                    ),
};

enum macro_id {
    MACRO_0,
    MACRO_1,
    MACRO_2,
    MACRO_3,
    MACRO_4,
    MACRO_5,
    MACRO_6,
    MACRO_7,
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    keyevent_t event = record->event;
    switch (id) {
        case MACRO_0:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_1:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_2:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_3:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_4:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_5:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_6:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_7:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
    }
    return MACRO_NONE;
}

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(5),
    [1] = ACTION_LAYER_TAP_TOGGLE(1),
    [2] = ACTION_LAYER_MOMENTARY(3),
    [3] = ACTION_LAYER_TAP_KEY(1, KC_CAPS),
    [4] = ACTION_MACRO(MACRO_2),
    [5] = ACTION_MACRO(MACRO_3),
    [6] = ACTION_MACRO(MACRO_4),
    [7] = ACTION_MACRO(MACRO_5),
    [8] = ACTION_MACRO(MACRO_6),
    [9] = ACTION_MACRO(MACRO_7),
};
