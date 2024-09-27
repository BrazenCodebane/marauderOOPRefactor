#include "TouchHandler.h"
#include "Button.h" 
#include "Coord.h"
Touch::Touch(Coord coord, ButtonLocation activeButtons[]){
/*take coordinates from a touch  event and store them in the class*/
    this->coordinates = coord;



}


void Touch::handlePress(){

   

}


bool Touch::isPressed(Coord touch, ButtonLocation activeButtons[], int padding = 0) {
  int arrayLength = sizeof(activeButtons) / sizeof(activeButtons[0]);
  for (int i = 0; i < arrayLength; i++) {
    if (touch.x >= activeButtons[i].coord.x - padding && 
        touch.x <= activeButtons[i].coord.x + padding && 
        touch.y >= activeButtons[i].coord.y - padding && 
        touch.y <= activeButtons[i].coord.y + padding) {
      return true;
    }
  }
  return false;
}
void Touch::handleEvent(const Event &event){





}