#include "TouchHandler.h"
#include "Button.h" 
#include "Coord.h"
#include "ButtonMenu.h"

Touch::Touch(Event touch, ButtonLocation activeButtons[])
: coordinates{touch.getTouchX(),touch.getTouchY()}

{
/*take coordinates from a touch  event and store them in the class*/
    



}






void Touch::handlePress(){

   

}


void Touch::isPressed(Event touch, ButtonLocation activeButtons[], int padding = 9) {
  int arrayLength = sizeof(activeButtons) / sizeof(activeButtons[0]);
  for (int i = 0; i < arrayLength; i++) {
    if(touch.getTouchX() >= activeButtons[i].coord.x - padding &&
        touch.getTouchX() <= activeButtons[i].coord.x + padding &&
        touch.getTouchY() >= activeButtons[i].coord.y - padding &&
        touch.getTouchY() <= activeButtons[i].coord.y + padding) {

        //activate activeButtons[i] TODO:: NEED TO FIGURE THIS OUT


      
    }
  }
   
}
void Touch::handleTouchEvent(Event event) {
    
  switch (event.getType()) {
    case TOUCH_EVENT:
      Touch::isPressed(event,  activeButtons, 9);
      break;
    case SWIPE_R_EVENT:
      Touch::SwipeRightMenu();
      break;
    case  SWIPE_L_EVENT:
    Touch::SwipeLeftMenu();
    break;
    case  SWIPE_U_EVENT:
    Touch::SwipeUpMenu();
    break;
    case  SWIPE_D_EVENT:
    Touch::SwipeDownMenu();
    break;
  }

}
  void Touch::SwipeRightMenu(){}
  void Touch::SwipeLeftMenu(){}
  void Touch::SwipeDownMenu(){}
  void Touch::SwipeUpMenu(){}

