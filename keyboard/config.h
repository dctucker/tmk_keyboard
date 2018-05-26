#ifndef CONFIG_H
#define CONFIG_H


/* USB Device descriptor parameter */
#define VENDOR_ID       0xDC70
#define PRODUCT_ID      0x0090
#define DEVICE_VER      0x0001
#define MANUFACTURER    dctucker
#define PRODUCT         Mac 90-key
#define DESCRIPTION     Symmetrical 5-row keyboard with standard US layout

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 20

#define TAPPING_TOGGLE  1

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() (keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)))

#endif
