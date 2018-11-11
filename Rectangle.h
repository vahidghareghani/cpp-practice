#ifndef Rectangle_h
#define Rectangle_h
class Rectangle: public Shape {
    
public:
    Rectangle(int newx, int newy, int newwidth, int newheight);
    int getWidth();
    int getHeight();
    void setWidth(int newwidth);
    void setHeight(int newheight);
    void draw();
    double getArea();
private:
    int width;
    int height;
};

#endif /* Rectangle_h */
