#ifndef TOUCHHANDLER_H
#define TOUCHHANDLER_H
#include "Event.h"
#include "Button.h"
#include "Coord.h"
class Touch{
public:
    Coord coordinates;
    Touch::Touch(Coord);
    void Touch::handlePress();
    bool Touch::isPressed(Coord touch, Coord p1, Coord p2, int padding=0); 
    void Touch::handleEvent(const Event &event);


};
#endif  // TOUCHHANDLER_H