#ifndef BUTTONUI_H
#define BUTTONUI_H

#include "Button.h"

class ButtonUI {
public:
    ButtonUI(Button* button, int x, int y, int width, int height);
    ~ButtonUI();

    void draw();
    void handleEvent(Event event);
    void update();

    void addButton(Button* button, int x, int y, int width, int height);
    void removeButton(Button* button);
    void drawAllButtons();
    void handleEventForAllButtons(Event event);

    void setButtonColor(uint16_t color);
    void setButtonTextColor(uint16_t color);
    void setButtonPressedColor(uint16_t color);
    void setButtonText(const char* text);
    void setButtonIcon(const uint8_t icon[5][5]);

private:
    Button* button_;
    int x_;
    int y_;
    int width_;
    int height_;
    bool isPressed_;
};


struct Event {
    int type;  // Event type (e.g., TOUCH_EVENT, RELEASE_EVENT, etc.)
    int touchX;  // Touch X coordinate
    int touchY;  // Touch Y coordinate
};


#endif  // BUTTONUI_H