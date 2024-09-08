#ifndef BUTTON_H
#define BUTTON_H

#include <TFT_eSPI.h> // Include the TFT library
#include "lang_var.h"
// Define button grid properties
#define BUTTON_RADIUS 30        // Radius of each circular button
#define BUTTON_SPACING 20       // Space between the buttons
#define GRID_ROWS 3             // Number of rows in the grid
#define GRID_COLS 3             // Number of columns in the grid
#define BUTTON_COLOR TFT_BLUE
#define BUTTON_TEXT_COLOR TFT_WHITE
#define BUTTON_PRESSED_COLOR TFT_RED


class Button {
private:
    TFT_eSPI *tft;  // Pointer to the display instance
    int x, y;       // X and Y position of the button's center
    int radius;     // Radius of the button
    uint16_t buttonColor, buttonTextColor, buttonPressedColor; // Button colors
    const char *label; // Text label for the button
    const uint8_t (*iconBitmap)[5]; // Pointer to icon bitmap

public:
    Button(TFT_eSPI *display, int xPos, int yPos, int btnRadius, const char *text, const uint8_t icon[5][5], uint16_t color, uint16_t textColor, uint16_t pressedColor);

    void drawButton(); // Draw the button with an icon and text
    void drawButtonGrid(int rows, int cols, int buttonRadius, int buttonSpacing, const uint8_t (*icons)[5][5], const char **labels); // Draw a grid of buttons
    bool isPressed(int touchX, int touchY); // Check if the button is pressed
    void handlePress(); // Handle button press event
    void resetButton(); // Reset the button state (e.g., color)
};

#endif
