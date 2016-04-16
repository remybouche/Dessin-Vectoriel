#include "line.h"
#include <cmath>


Line::Line(){
    Shape();
    setXY2(0,0);
}

/*
Line::Line(int _X, int _Y, int _X2, int _Y2, int _r, int _g, int _b, char _alpha){
    Shape(_X, _Y, _r, _g, _b, _alpha);
    setXY2(_X2, _Y2);

}
*/


Line::Line(int _X, int _Y, int _X2, int _Y2, int _r, int _g, int _b, char _alpha) : Shape(_X, _Y, _r, _g, _b, _alpha){
    setXY2(_X2, _Y2);

}


Line::~Line(){

}

void Line::setXY2(int _X2, int _Y2){
    X2 = _X2;
    Y2 = _Y2;
}

int Line::getY2(){
    return Y2;
}

int Line::getX2(){
    return X2;
}

int Line::min(int a, int b){
    if(a<b)
        return a;
    else
        return b;
}

int Line::max(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}


int Line::interpolate(int x){
    float f;
    f = ( ( x - getX() )*( getY2() - getY()) / ( getX2() - getX()) ) + getY();
    return round(f);

}


void Line::draw(CImage *img){
    int i;
    for (i = min(getX(), getX2()); i<max(getX(), getX2()); i++){
        CPixel *p = img->getPixel(i, interpolate(i));
        *p = color;

        }
}


void Line::check(){
    cout << "------------ LINE PARAMETERS -------------" << endl;
    cout << "Position: " << Shape::getX() << "*" << getY() << " (X,Y)" << endl;
    cout << "End: " << getX2() << "*" << getY2() << " (X2,Y2)" << endl;
    cout << "------------------------------------------" << endl;
}
