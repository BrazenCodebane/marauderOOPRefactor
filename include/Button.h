
#ifndef BUTTON_H
#define BUTTON_H

#include <TFT_eSPI.h>

class Button {
public:
    Button(TFT_eSPI *display, int xPos, int yPos, int btnRadius, const char *text, const uint8_t icon[5][5], uint16_t color, uint16_t textColor, uint16_t pressedColor);

    void drawButton();
    bool isPressed(int touchX, int touchY);
    void handlePress();
    void resetButton();

private:
    TFT_eSPI *tft;
    int x, y, radius;
    const char *label;
    const uint8_t (*iconBitmap)[5];
    uint16_t buttonColor, buttonTextColor, buttonPressedColor;
};

#endif // BUTTON_H