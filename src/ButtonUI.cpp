#include "ButtonUI.h"
#include <algorithm> // For std::find

ButtonUI::ButtonUI(TFT_eSPI *display) : tft(display), buttons(nullptr), buttonCount(0), maxButtons(0) {}

ButtonUI::~ButtonUI() {
    delete[] buttons;
}

void ButtonUI::drawAllButtons() {
    if (buttons) {
        for (int i = 0; i < buttonCount; ++i) {
            buttons[i]->drawButton();
        }
    }
}


void ButtonUI::update() {
    if (buttons) {
        for (int i = 0; i < buttonCount; ++i) {
            buttons[i]->resetButton();
        }
    }
}

void ButtonUI::addButton(Button* button) {
    if (buttonCount >= maxButtons) {
        resizeButtonArray(maxButtons == 0 ? 1 : maxButtons * 2);
    }
    buttons[buttonCount++] = button;
}

void ButtonUI::removeButton(Button* button) {
    auto it = std::find(buttons, buttons + buttonCount, button);
    if (it != buttons + buttonCount) {
        delete *it;
        std::move(it + 1, buttons + buttonCount, it);
        --buttonCount;
    }
}




void ButtonUI::resizeButtonArray(int newSize) {
    Button** newArray = new Button*[newSize];
    std::move(buttons, buttons + buttonCount, newArray);
    delete[] buttons;
    buttons = newArray;
    maxButtons = newSize;
}