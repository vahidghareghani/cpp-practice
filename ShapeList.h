#ifndef ShapeList_h
#define ShapeList_h
#include <vector>
#include <iostream>
#include "Shape.h"
using namespace std;

class ShapeList {
    vector<Shape*> shapes;
    
public:
    void addShape(Shape& t){
        shapes.push_back(&t);
    }
};


#endif /* ShapeList_h */
