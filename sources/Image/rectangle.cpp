#include "rectangle.h"


Rectangle::Rectangle(){
    Shape();
    setLength(10);
    setHeigth(10);
}

/*
Rectangle::Rectangle(int _X, int _Y, int _length, int _heigth, int _r, int _g, int _b, char _alpha){
    Shape(_X, _Y, _r, _g, _b, _alpha);
    setLength(_length);
    setHeigth(_heigth);

}
*/



Rectangle::Rectangle(int _X, int _Y, int _length, int _heigth, int _r, int _g, int _b, char _alpha) : Shape(_X, _Y, _r, _g, _b, _alpha){
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
    heigth = _heigth;
}

int Rectangle::getLength(){
    return length;
}

int Rectangle::getHeigth(){
    return heigth;
}

void Rectangle::draw(CImage *img){
    int i, j;
    for (j = Y; j<(heigth+Y); j++){
        for (i = X; i<(length+X); i++){
            CPixel *p = img->getPixel(i, j);
            *p = color;

        }
    }
}


void Rectangle::check(){
    cout << "---------- RECTANGLE PARAMETERS ----------" << endl;
    cout << "Size: " << getLength() << "*" << getHeigth() << " (length, heigth)" << endl;
    cout << "Position: " << Shape::getX() << "*" << getY() << " (X,Y)" << endl;
    cout << "------------------------------------------" << endl;
}
