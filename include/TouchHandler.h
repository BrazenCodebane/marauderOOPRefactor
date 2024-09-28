#ifndef TOUCHHANDLER_H
#define TOUCHHANDLER_H
#include "Event.h"
#include "Button.h"
#include "Coord.h"
#include "ButtonLocation.h"
class Touch{
public:
    Coord coordinates;
    
    Touch::Touch(Event touch, ButtonLocation activeButtons[]);
    void Touch::handlePress();
    void Touch::isPressed(Event touch, ButtonLocation activeButtons[], int padding = 9); 
    void Touch::handleTouchEvent(Event event);
    ButtonLocation activeButtons[];

        void Touch::SwipeRightMenu();
        void Touch::SwipeLeftMenu();
        void Touch::SwipeDownMenu();
        void Touch::SwipeUpMenu();

};
#endif  // TOUCHHANDLER_H