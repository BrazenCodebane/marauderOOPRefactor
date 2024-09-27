# Marauder Project

## Overview

The Marauder project leverages the TFT_eSPI library to create a user interface with interactive buttons on a TFT display. The project is organized into two primary classes:

- `Button`: Represents a single button on the display.
- `ButtonUI`: Manages a collection of buttons and handles user interactions.

## Directory Structure

- `src/`
  - `Button.h` - Header file for the Button class.
  - `Button.cpp` - Implementation file for the Button class.
  - `ButtonUI.h` - Header file for the ButtonUI class.
  - `ButtonUI.cpp` - Implementation file for the ButtonUI class.
- `examples/`
  - `main.ino` - Example Arduino sketch demonstrating usage of Button and ButtonUI classes.

## Dependencies

- [TFT_eSPI library](https://github.com/Bodmer/TFT_eSPI) - For driving the TFT display.

## Classes

### Button

The `Button` class represents an individual button on the TFT display.

#### Constructor

```cpp
Button(TFT_eSPI *display, int xPos, int yPos, int btnRadius, const char *text, const uint8_t icon[5][5], uint16_t color, uint16_t textColor, uint16_t pressedColor);

    • display: Pointer to the TFT_eSPI instance.
    • xPos: X position of the button center.
    • yPos: Y position of the button center.
    • btnRadius: Radius of the button.
    • text: Text label for the button.
    • icon: 5x5 pixel icon for the button (use nullptr for no icon).
    • color: Background color of the button.
    • textColor: Color of the text and icon.
    • pressedColor: Color of the button when pressed.
Methods
    • void drawButton();
Draws the button with its icon and text.
    • bool isPressed(int touchX, int touchY);
Checks if the button is pressed based on touch coordinates.
    • void handlePress();
Handles the button press event (changes button color to pressedColor).
    • void resetButton();
Resets the button to its default state (buttonColor) and redraws the icon and text.
ButtonUI
The ButtonUI class manages a collection of Button instances, handling drawing and events.
Constructor
cpp
Copy code
ButtonUI(TFT_eSPI *display);
    • display: Pointer to the TFT_eSPI instance.
Destructor
cpp
Copy code
~ButtonUI();
Methods
    • void drawButton();
Draws all buttons in the UI.
    • void handleEvent(const Event &event);
Handles a touch event. The Event structure includes the touch coordinates.
    • void update();
Updates the state of all buttons (e.g., resetting their appearance if they are not pressed).
    • void addButton(Button* button);
Adds a button to the UI.
    • void removeButton(Button* button);
Removes a button from the UI.
    • void drawAllButtons();
Draws all buttons in the UI.
    • void handleEventForAllButtons(const Event &event);
Handles events for all buttons in the UI.
Private Methods
    • void resizeButtonArray(int newSize);
Resizes the internal array of buttons when needed.



Changes affecting two main things :
Memory Management

    1. Button Class: There is no dynamic memory allocation in the Button class. All member variables are either pointers to constants (like const char *label and const uint8_t (*iconBitmap)[5]) or basic types. Therefore, no explicit memory management is required here beyond what is managed by the constructor and destructor implicitly.
    2. ButtonUI Class:
        ◦ You were using raw pointers to manage an array of Button pointers.
        ◦ Dynamic Memory Allocation: The ButtonUI class dynamically allocates an array of Button pointers with new[] and resizes it with resizeButtonArray(). This means proper memory management is crucial to avoid memory leaks.
        ◦ Destructor: The previous ButtonUI implementation did not include a destructor. This is problematic because it means the dynamically allocated memory for the buttons could be leaked.
Adding Proper Memory Management
To ensure proper memory management, implement a destructor in the ButtonUI class to free the dynamically allocated memory.

Customization

    • Button Class: The Button class can be extended to handle additional types of events or features, such as long-press detection, multiple states, or more complex interactions.
    • ButtonUI Class: You can extend ButtonUI to support more complex UI management features, such as grouping buttons, handling different types of events, or integrating with other UI elements.