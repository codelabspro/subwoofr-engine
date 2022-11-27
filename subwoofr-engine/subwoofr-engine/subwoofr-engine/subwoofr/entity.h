//
//  entity.h
//  subwoofr
//

#pragma once

class Entity {
    
public:
    static int a;
protected:
    int x, y;
    
public:
    
    Entity(int x, int y);
    
    int getX() const;
    int getY() const;
    

};


