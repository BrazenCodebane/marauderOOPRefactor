#ifndef BUTTONUI_H
#define BUTTONUI_H

#include "Button.h"

enum EventType {
    TOUCH_EVENT,
    // Add other event types if necessary
};

struct Event {
    EventType type;
    int touchX;
    int touchY;
};

class ButtonUI {
public:
    ButtonUI(TFT_eSPI *display);
    ~ButtonUI();

    void drawButton();
    void handleEvent(const Event &event);
    void update();
    void addButton(Button* button);
    void removeButton(Button* button);
    void drawAllButtons();
    void handleEventForAllButtons(const Event &event);

private:
    TFT_eSPI *tft;
    Button** buttons;
    int buttonCount;
    int maxButtons;

    void resizeButtonArray(int newSize);
};

#endif // BUTTONUI_H