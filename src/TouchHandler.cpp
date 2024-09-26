#include "TouchHandler.h"
#include "Button.h" 
#include "Coord.h"
Touch::Touch(Coord coord){
/*take coordinates from a touch  event and store them in the class*/
    this->coordinates = coord;



}


void Touch::handlePress(){

   

}
/*bool Touch::isPressed(int touchX, int touchY) {
    int dx = touchX - TFT_WIDTH / 2; // Center of the display
    int dy = touchY - TFT_HEIGHT / 2;
    int distance = sqrt(dx * dx + dy * dy);
    return distance <= TOUCH_THRESHOLD; // Define TOUCH_THRESHOLD as a constant
}*/

bool Touch::isPressed(Coord touch, Coord p1, Coord p2, int padding=0) { // I encourage you to simplify this to data types
  return touch.x > (p1.x-padding) && touch.x < (p1.y+padding) && touch.y > (p2.x-padding) && touch.y < (p2.y+padding);
}
void Touch::handleEvent(const Event &event){





}