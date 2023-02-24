#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"


/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 6

/* key matrix pins */
#define MATRIX_ROW_PINS { B7, B3, B4, B5, B6 }
#define MATRIX_COL_PINS { A5, A4, A3, A2, A1, A0 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL


/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5


/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#endif
