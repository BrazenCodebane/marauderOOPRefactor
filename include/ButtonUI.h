#ifndef BUTTONUI_H
#define BUTTONUI_H

#include "Button.h"


class ButtonUI {
public:
    ButtonUI(TFT_eSPI *display);
    ~ButtonUI();

    void drawAllButtons();
    void update();
    void addButton(Button* button);
    void removeButton(Button* button);
    

private:
    TFT_eSPI *tft;
    Button** buttons;
    int buttonCount;
    int maxButtons;

    void resizeButtonArray(int newSize);
};

#endif // BUTTONUI_H