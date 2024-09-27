#ifndef BUTTONLOCATION_H
#define BUTTONLOCATION_H

#include "Coord.h"
#include  "Button.h"
class ButtonLocation : Coord
{
    private:
        Button button;
    public:

        ButtonLocation::ButtonLocation();

        ButtonLocation::ButtonLocation(Button button);
    // HERE

};




#endif  // BUTTONLOCATION_H