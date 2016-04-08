#include "Rectangle.h"

Rectangle::Rectangle(){
    Shape();
    setLength(10);
    setHeigth(10);
}

Rectangle::Rectangle(int _X, int _Y, int _length, int _heigth, int _r, int _g, int _b, char _alpha){
    Shape(_X, _Y, _r, _g, _b, _alpha);
    setLength(_length);
    setHeigth(_heigth);

}

Rectangle::~Rectangle(){

}

void Rectangle::setLength(int _length){
    length = _length;
}

void Rectangle::setHeigth(int _heigth){
    length = _heigth;
}
