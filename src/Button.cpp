#include "Button.h"

//should create button in center of screen on default but dont know how to talk to screen without it being a var
Button::Button(){
    this->x = TFT_WIDTH/2;
    this->y = TFT_HEIGHT/2;
    this->radius=10;
    this->tft;
};// Constructor
Button::Button(TFT_eSPI *display, int xPos, int yPos, int btnRadius, const char *text, const uint8_t icon[5][5], uint16_t color, uint16_t textColor, uint16_t pressedColor)
    : tft(display), x(xPos), y(yPos), radius(btnRadius), label(text), iconBitmap(icon), buttonColor(color), buttonTextColor(textColor), buttonPressedColor(pressedColor) {}

// Draw a single button with an icon and text
void Button::drawButton() {
    tft->fillCircle(x, y, radius, buttonColor); // Draw the button circle

    // Draw the icon in the center of the button
    int iconSize = 5; // Icon is 5x5 pixels
    int startX = x - iconSize / 2;
    int startY = y - iconSize / 2;
    for (int i = 0; i < iconSize; i++) {
        for (int j = 0; j < iconSize; j++) {
            if (iconBitmap[i][j]) {
                tft->drawPixel(startX + i, startY + j, buttonTextColor);
            }
        }
    }

    // Draw text beneath the button
    tft->setTextColor(buttonTextColor, buttonColor);
    tft->drawCentreString(label, x, y + radius + 10, 2); // Text beneath the button
}

// Reset the button state
void Button::resetButton() {
    tft->fillCircle(x, y, radius, buttonColor); // Reset button color
    drawButton(); // Redraw icon and text after reset
}