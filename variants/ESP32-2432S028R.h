 #ifndef ESP32_24325028R_H
 #define ESP32_24325028R_H

 #define HARDWARE_NAME "CYD"


                //TODO: finish config for CYD variant file


    #define HAS_BATTERY
    #define HAS_BT
    #define HAS_PWR_MGMT
    #define HAS_TOUCHSCREEN
    #define HAS_SD
    #define USE_SD
   

   
    #define SCREEN_CHAR_WIDTH 40
    //#define TFT_MISO 19
    #define TFT_MOSI 15
    #define TFT_SCLK 13
    #define TFT_CS 5
    #define TFT_DC 23
    #define TFT_RST 18
    #define TFT_BL -1
    #define TOUCH_CS -1
    //#define SD_CS 1

    #define SCREEN_BUFFER

    #define MAX_SCREEN_BUFFER 9

    #define BANNER_TEXT_SIZE 1

    #ifndef TFT_WIDTH
    #define TFT_WIDTH 135
    #endif

    #ifndef TFT_HEIGHT
    #define TFT_HEIGHT 240
    #endif

    #define CHAR_WIDTH 6
    #define SCREEN_WIDTH TFT_HEIGHT // Originally 240
    #define SCREEN_HEIGHT TFT_WIDTH // Originally 320
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
    #define BUTTON_SCREEN_LIMIT 6
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

    #define KIT_LED_BUILTIN 4
#endif