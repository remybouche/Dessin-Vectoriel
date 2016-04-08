#include "shape.h"

Shape::Shape(){
    setX(0);
    setY(0);
    color = CPixel();
    setAlpha(0);
}


Shape::Shape(int _X, int_Y, int _r, int _g, int _b, char _alpha){
    setXY(_X, _Y);
    color = CPixel(_r, _g, _b);
    setAlpha(_alpha);
}

Shape::~Shape(){

}

void Shape::setXY(int _X, int_Y){
    X = _X;
    Y = _Y;
}


void Shape::setAlpha(char _alpha){
    alpha = (_alpha>100)?100:_alpha;
    alpha = (alpha<0)?0:alpha;
}


int Shape::getX(){
    return(X);
}

int Shape::getY(){
    return(Y);
}


char Shape::getAlpha(){
    return(alpha);
}

