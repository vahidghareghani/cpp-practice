#ifndef ShapeList_h
#define ShapeList_h
#include <vector>
#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

class ShapeList {
    vector<Shape*> shapes;
    
public:
    struct {
        bool operator()(Shape* a, Shape* b) const
        {
            return a->getArea() < b->getArea();
        }
    } Cmp;
    void addShape(Shape& t){
        shapes.push_back(&t);
    }
    void remove(){
        for (auto it=shapes.begin(); it!=shapes.end(); it++) {
            if ((*it) == (Shape*)this) {
                shapes.erase(it);
            }
        }
    }
    unsigned long size(){
        return shapes.size();
    }
    void print(){
        for (auto it=shapes.begin(); it!=shapes.end(); it++) {
            (*it)->draw();
        }
    }
    void sort(){
        ::sort(shapes.begin(), shapes.end(), Cmp);
    }
};


#endif /* ShapeList_h */
