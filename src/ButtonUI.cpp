class ButtonUI {
public:
    ButtonUI(Button* button, int x, int y, int width, int height)
        : button_(button), x_(x), y_(y), width_(width), height_(height), isPressed_(false) {}

    void draw() {
        button_->drawButton();
    }

    void handleEvent(Event event) {
        if (event.type == TOUCH_EVENT) {
            int touchX = event.touchX;
            int touchY = event.touchY;
            if (button_->isPressed(touchX, touchY)) {
                handlePress();
            }
        }
    }

    void update() {
        if (isPressed_) {
            button_->handlePress();
        } else {
            button_->resetButton();
        }
    }

    void addButton(Button* button, int x, int y, int width, int height) {
        // Add button to UI
    }

    void removeButton(Button* button) {
        // Remove button from UI
    }

    void drawAllButtons() {
        // Draw all buttons in UI
    }

    void handleEventForAllButtons(Event event) {
        // Handle events for all buttons in UI
    }

private:
    Button* button_;
    int x_;
    int y_;
    int width_;
    int height_;
    bool isPressed_;
};