#ifndef MarauderMini_h
#define MarauderMini_h

    #define HARDWARE_NAME "Marauder Mini"
    #define HAS_BATTERY
    #define HAS_BT
    #define HAS_BUTTONS
    #define HAS_NEOPIXEL_LED
    #define HAS_SCREEN
    #define HAS_SD
    #define USE_SD
    #define HAS_TEMP_SENSOR
    #define HAS_GPS


    #define L_BTN 13
    #define C_BTN 34
    #define U_BTN 36
    #define R_BTN 39
    #define D_BTN 35




    #define SCREEN_CHAR_WIDTH 40
    #define TFT_MISO 19
    #define TFT_MOSI 23
    #define TFT_SCLK 18
    #define TFT_CS 27
    #define TFT_DC 26
    #define TFT_RST 5
    #define TFT_BL 32
    #define TOUCH_CS 21
    #define SD_CS 4

    #define SCREEN_BUFFER

    #define MAX_SCREEN_BUFFER 9

    #define BANNER_TEXT_SIZE 1

    #define CHAR_WIDTH 6
    #define SCREEN_WIDTH TFT_WIDTH // Originally 240
    #define SCREEN_HEIGHT TFT_HEIGHT // Originally 320
    #define HEIGHT_1 TFT_WIDTH
    #define WIDTH_1 TFT_WIDTH
    #define STANDARD_FONT_CHAR_LIMIT (TFT_WIDTH/6) // number of characters on a single line with normal font
    #define TEXT_HEIGHT (TFT_HEIGHT/10) // Height of text to be printed and scrolled
    #define BOT_FIXED_AREA 0 // Number of lines in bottom fixed area (lines counted from bottom of screen)
    #define TOP_FIXED_AREA 48 // Number of lines in top fixed area (lines counted from top of screen)
    #define YMAX TFT_HEIGHT // Bottom of screen area
    #define minimum(a,b)     (((a) < (b)) ? (a) : (b))
    //#define MENU_FONT NULL
    #define MENU_FONT &FreeMono9pt7b // Winner
    //#define MENU_FONT &FreeMonoBold9pt7b
    //#define MENU_FONT &FreeSans9pt7b
    //#define MENU_FONT &FreeSansBold9pt7b
    #define BUTTON_SCREEN_LIMIT 10
    #define BUTTON_ARRAY_LEN 13
    #define STATUS_BAR_WIDTH (TFT_HEIGHT/16)
    #define LVGL_TICK_PERIOD 6

    #define FRAME_X 100
    #define FRAME_Y 64
    #define FRAME_W 120
    #define FRAME_H 50

    // Red zone size
    #define REDBUTTON_X FRAME_X
    #define REDBUTTON_Y FRAME_Y
    #define REDBUTTON_W (FRAME_W/2)
    #define REDBUTTON_H FRAME_H

    // Green zone size
    #define GREENBUTTON_X (REDBUTTON_X + REDBUTTON_W)
    #define GREENBUTTON_Y FRAME_Y
    #define GREENBUTTON_W (FRAME_W/2)
    #define GREENBUTTON_H FRAME_H

    #define STATUSBAR_COLOR 0x4A49

    #define BANNER_TIME 50

    #define COMMAND_PREFIX "!"

    // Keypad start position, key sizes and spacing
    #define KEY_X (TFT_WIDTH/2) // Centre of key
    #define KEY_Y (TFT_HEIGHT/4.5)
    #define KEY_W TFT_WIDTH // Width and height
    #define KEY_H (TFT_HEIGHT/12.8)
    #define KEY_SPACING_X 0 // X and Y gap
    #define KEY_SPACING_Y 1
    #define KEY_TEXTSIZE 1   // Font size multiplier
    #define ICON_W 22
    #define ICON_H 22
    #define BUTTON_PADDING 10


    //GPS config
    #define GPS_SERIAL_INDEX 2
    #define GPS_TX 21
    #define GPS_RX 22
    #define mac_history_len 512
#endif // MarauderMini_h