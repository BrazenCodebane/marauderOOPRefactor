#ifndef EVENT_H
#define EVENT_H
    
struct Event {
    EventType type;
    int touchX;
    int touchY;
};

    
enum EventType {
    TOUCH_EVENT,
    SWIPE_R_EVENT,
    SWIPE_L_EVENT,
    SWIPE_U_EVENT,
    SWIPE_D_EVENT,
    
    
   
};
    
    
    
    
    
    
    
    
#endif