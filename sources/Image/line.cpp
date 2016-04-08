#include "line.h"

Line::Line(){
    Shape::Shape();
    setXY2(0, 0);
}

Line::Line(int _X, int _Y, int X2, int Y2, int _r, int _g, int _b, char _alpha){
    Shape::Shape(_X, _Y, _r, _g, _b, _alpha);
    setXY2(_X2, _Y2);

}

Line::~Line(){

}

void Line::setXY2(int _X2, int _Y2){
    X2 = _X2;
    Y2 = _Y2;
}
