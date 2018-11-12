#include <iostream>
#include "ShapeList.h"
using namespace std;

int main(){
    Rectangle v(2, 3, 4, 5);
    Circle c(3, 4, 5);
    ShapeList list;
    list.addShape(c);
    list.print();
    list.addShape(v);
    list.print();
    list.sort();
    list.print();
    list.remove(&v);
    list.print();
    return 0;
}
