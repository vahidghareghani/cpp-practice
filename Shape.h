#ifndef Shape_h
#define Shape_h
class Shape {
    
public:
    Shape(int newx, int newy);
    int getX();
    int getY();
    void setX(int newx);
    void setY(int newy);
    void moveTo(int newx, int newy);
    void rMoveTo(int deltax, int deltay);
    virtual void draw()=0;
    virtual double getArea()=0;
    
private:
    int x;
    int y;
};

#endif /* Shape_h */
