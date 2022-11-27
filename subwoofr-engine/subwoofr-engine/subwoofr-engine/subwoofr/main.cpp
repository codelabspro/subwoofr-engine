//
//  main.cpp
//  subwoofr
//

#include <iostream>
#include "entity.h"

int increment(int& a, int& b) {
    return a + b;
}


void printEntity(const Entity& entity) {
    std::cout << entity.getX();
    std::cout << entity.getY();
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    std::cout << "___________________";
    std::cout << std::endl;
    Entity e(5,8);
    printEntity(e);
    

    std::cout << std::endl;
    std::cout << "-----------";
    std::cout << std::endl;
    int a = 5;
    int b = 3;
    int* p = &a;
    std::cout << *p;
    std::cout << "-----------";
    std::cout << std::endl;
    *p = 6;
    std::cout << a;
    std::cout << "-----------";
    std::cout << std::endl;
    std::cout << increment(a, b);
    
    std::cout << "-----------";
    std::cout << std::endl;

    return 0;
}
