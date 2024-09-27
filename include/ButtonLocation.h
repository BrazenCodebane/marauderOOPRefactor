#ifndef BUTTONLOCATION_H
#define BUTTONLOCATION_H

#include "Coord.h"
#include  "Button.h"




class ButtonLocation : Coord
{
  public:
        Coord coord;

        ButtonLocation::ButtonLocation();

        ButtonLocation::ButtonLocation(Button button);

};




#endif  // BUTTONLOCATION_H