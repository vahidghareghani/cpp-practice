#ifndef Circle_h
#define Circle_h
#include <iostream>
class Circle: public Shape {
    
public:
    Circle(int newx, int newy, int newradius);
    int getRadius();
    void setRadius(int newradius);
    void draw();
    double getArea();
    
private:
    int radius;
};

#endif /* Circle_h */
