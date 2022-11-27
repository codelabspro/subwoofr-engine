//
//  entity.h
//  subwoofr
//

#pragma once

class Entity {
protected:
    int x, y;
    
public:
    
    Entity(int x, int y) {
        this->x = x;
        this->y = y;
    }
    
    int getX() const { return x;};
    int getY() const { return y;};
    

};


