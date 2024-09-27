#ifndef TOUCHHANDLER_H
#define TOUCHHANDLER_H
#include "Event.h"
#include "Button.h"
#include "Coord.h"
#include "ButtonLocation.h"
class Touch{
public:
    Coord coordinates;
    Touch::Touch(Coord coords,ButtonLocation activeButtons[]);
    void Touch::handlePress();
    bool Touch::isPressed(Coord touch, ButtonLocation activeButtons[], int padding = 0); 
    void Touch::handleEvent(const Event &event);
    ButtonLocation activeButtons[];

};
#endif  // TOUCHHANDLER_H