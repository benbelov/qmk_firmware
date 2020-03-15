#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x1222
#define DEVICE_VER      0x0001
#define MANUFACTURER    DZTECH
#define PRODUCT         DZ65RGB
#define DESCRIPTION     DZ65 ARM RGB keyboard

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { B1, B10, B11, B14, B12 }
#define MATRIX_COL_PINS { A6, A7, B0, B13, B15, A8, A15, B3, B4, B5, B8, B9, C13, C14, C15 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* disable these deprecated features by default */
#ifndef LINK_TIME_OPTIMIZATION_ENABLE
#    define NO_ACTION_MACRO
#    define NO_ACTION_FUNCTION
#endif

#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_LED_PROCESS_LIMIT 4
#    define RGB_MATRIX_LED_FLUSH_LIMIT 26
#    define DEBOUNCE 3
#    define RGB_DISABLE_AFTER_TIMEOUT 0 // number of ticks to wait until disabling effects
#    define RGB_DISABLE_WHEN_USB_SUSPENDED true // turn off effects when suspended
#    define RGB_MATRIX_KEYPRESSES
/*
#    define DISABLE_RGB_MATRIX_GRADIENT_UP_DOWN	
#    define DISABLE_RGB_MATRIX_BAND_SAT
#    define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#    define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#    define DISABLE_RGB_MATRIX_SPLASH
#    define DISABLE_RGB_MATRIX_MULTISPLASH
#    define DISABLE_RGB_MATRIX_SOLID_SPLASH
#    define DISABLE_RGB_MATRIX_SOLID_MULTISPLASH
#    define DISABLE_RGB_MATRIX_DIGITAL_RAIN
*/
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
#    define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_MULTISPLASH
#    define RGB_MATRIX_STARTUP_HUE 25  // Sets the default hue value, if none has been set
#    define RGB_MATRIX_STARTUP_SAT 255 // Sets the default saturation value, if none has been set
#    define RGB_MATRIX_STARTUP_VAL 120 // Sets the default brightness value, if none has been set
#    define RGB_MATRIX_STARTUP_SPD 80 // Sets the default animation speed, if none has been set
#    define DRIVER_ADDR_1 0b1110100
#    define DRIVER_ADDR_2 0b1110111
#    define DRIVER_COUNT 2
#    define DRIVER_1_LED_TOTAL 35
#    define DRIVER_2_LED_TOTAL 33
#    define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)
#endif
