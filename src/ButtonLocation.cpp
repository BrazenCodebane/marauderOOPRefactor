#include "ButtonLocation.h"
ButtonLocation::ButtonLocation() : Coord() {

}
ButtonLocation::ButtonLocation(Button btn) :Coord() {

    this->coord.x = btn.x;
    this->coord.y = btn.y;
   

}