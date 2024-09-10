#ifndef MarauderMini_h
#define MarauderMini_h

#define HARDWARE_NAME "Marauder Mini"
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

#define BANNER_TIME 50
#define COMMAND_PREFIX "!"
#define KEY_X (TFT_WIDTH/2)
#define KEY_Y (TFT_HEIGHT/4.5)
#define KEY_W TFT_WIDTH
#define KEY_H (TFT_HEIGHT/12.8)
#define KEY_SPACING_X 0
#define KEY_SPACING_Y 1
#define KEY_TEXTSIZE 1
#define ICON_W 22
#define ICON_H 22
#define BUTTON_PADDING 10

#define MEM_LOWER_LIM 20000
#define MAX_HTML_SIZE 11400
#define GPS_SERIAL_INDEX 2
#define GPS_TX 21
#define GPS_RX 22
#define mac_history_len 512

#endif // MarauderMini_h