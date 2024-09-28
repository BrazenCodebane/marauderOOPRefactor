#include "Event.h"

EventType eventTest(Event Event){
    
        int Ev_x=Event.getEndX() - Event.getTouchX() ; 
        int Ev_y=Event.getEndY() - Event.getTouchY() ; 
        if (Ev_x == 0 && Ev_y ==0){
            return  EventType::TOUCH_EVENT;
        } else if (Ev_x < 0 ) {
            return EventType:: SWIPE_L_EVENT;
        } else if (Ev_x > 0 ) {
            return EventType:: SWIPE_R_EVENT;
        } else if (Ev_y > 0 ) {
            return EventType:: SWIPE_U_EVENT;
        } else if (Ev_y < 0 ) {
            return EventType:: SWIPE_D_EVENT;
        } 
    



    return EventType();
}