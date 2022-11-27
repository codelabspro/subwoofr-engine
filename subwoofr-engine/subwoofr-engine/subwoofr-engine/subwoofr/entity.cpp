//
//  entity.cpp
//  SubWoofrEngine
//

#include "entity.h"

int Entity::a = 2;

Entity::Entity(int x, int y) {
    this->x = x;
    this->y = y;
}

int Entity::getX() const{
    return x;
}

int Entity::getY() const {
    return y;
}
