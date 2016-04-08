#include "circle.h"

Circle::Circle(){
    Shape();
    setRadius(0);
}

Circle::Circle(int _X, int _Y, int _radius, int _r, int _g, int _b, char _alpha){
    Shape(_X, _Y, _r, _g, _b, _alpha);
    setRadius(_radius);
}

Circle::~Circle(){

}

void Circle::setRadius(int _radius){
    radius = _radius;
}
