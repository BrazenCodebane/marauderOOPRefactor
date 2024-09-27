#include "ButtonLocation.h"
ButtonLocation::ButtonLocation() : button() {

}
ButtonLocation::ButtonLocation(Button btn) : button(btn) {
    this->x=btn.x;
    this->y=btn.y;
    this->button = btn; // I'm still making this reference just in case it ever comes up. 
    //You have the information, so you might as well use it.

}