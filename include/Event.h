#ifndef EVENT_H
#define EVENT_H

enum EventType {
    TOUCH_EVENT,
    SWIPE_R_EVENT,
    SWIPE_L_EVENT,
    SWIPE_U_EVENT,
    SWIPE_D_EVENT
};

class Event {
private:
    EventType type;
    int touchX;
    int touchY;
    int endX;
    int endY;

public:
    // Constructor
    Event( int x, int y, int endX = 0, int endY = 0)
        :  touchX(x), touchY(y), endX(endX), endY(endY) {}



    EventType eventTest(Event Event);
    // Getter for type
   int getType() const {
        return type;
    }

    // Getter for touchX
    int getTouchX() const {
        return touchX;
    }

    // Getter for touchY
    int getTouchY() const {
        return touchY;
    }

    // Getter for endX
    int getEndX() const {
        return endX;
    }

    // Getter for endY
    int getEndY() const {
        return endY;
    }

    // Setter for type
    void setType(EventType eventType) {
        type = eventType;
    }

    // Setter for touchX
    void setTouchX(int x) {
        touchX = x;
    }

    // Setter for touchY
    void setTouchY(int y) {
        touchY = y;
    }

    // Setter for endX
    void setEndX(int x) {
        endX = x;
    }

    // Setter for endY
    void setEndY(int y) {
        endY = y;
    }
};

#endif  // EVENT_H
    
    
    
    
