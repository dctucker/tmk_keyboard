#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* layer 0 */
    KEYMAP(
          F1,   F5,  ESC,  GRV,    1,    2,    3,    4,    5,    6,    7,    8,    9,    0, MINS,  EQL, BSPC,  INS, HOME, PGUP, \
          F2,   F6,  F10,  TAB,    Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P, LBRC, RBRC, BSLS,  DEL,  END, PGDN, \
          F3,   F7,  F11, CAPS,          A,    S,    D,    F,    G,    H,    J,    K,    L, SCLN, QUOT,        F13,  F14,  F15, \
          F4,   F8,  F12,                Z,    X,    C,    V,    B,    N,    M, COMM,  DOT, SLSH,              F16,   UP,  F17, \
         CLR,   F9,  FN0,                                            SPC,                                ENT, LEFT, DOWN, RGHT, \
                          LCTL, LSFT, LALT, LGUI,                                     RGUI, RALT, RSFT, RCTL                    ),
    /* layer 1 */
    KEYMAP(
         F18,  F22, EJCT,  APP, BTN1, BTN2, BTN3, BTN4, BTN5, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  DEL, PSLS, PAST, PMNS, \
         F19,  F23, MUTE, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PSCR, SLCK, PAUS, PEQL,   P7,   P8,   P9, \
         F20, MRWD, VOLD, TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, WH_L, WH_D, WH_U, WH_R, TRNS, TRNS,         P4,   P5,   P6, \
         F21, MPLY, VOLU,             TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PCMM, PDOT, PSLS,               P1,   P2,   P3, \
        NLCK, MFFD, TRNS,                                           BTN1,                               PENT,   P0, PDOT, PPLS, \
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
    [0]  = ACTION_LAYER_MOMENTARY(1),
    [1]  = ACTION_LAYER_TOGGLE(1),
    [2] = ACTION_MACRO(MACRO_0),
    [3] = ACTION_MACRO(MACRO_1),
    [4] = ACTION_MACRO(MACRO_2),
    [5] = ACTION_MACRO(MACRO_3),
    [6] = ACTION_MACRO(MACRO_4),
    [7] = ACTION_MACRO(MACRO_5),
    [8] = ACTION_MACRO(MACRO_6),
    [9] = ACTION_MACRO(MACRO_7),
};
