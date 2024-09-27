#include "ButtonLocation.h"
ButtonLocation::ButtonLocation() : Coord() {

}
ButtonLocation::ButtonLocation(Button btn) :Coord() {
    
    this->coord.x = btn.x;
    this->coord.y = btn.y;
     // I'm still making this reference just in case it ever comes up. 
    //You have the information, so you might as well use it.

}