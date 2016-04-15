#include "rectangle.h"


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
    heigth = _heigth;
}

void Rectangle::showRectangle(CImage *_image){
    int i;
    int j;
    /*for(j=Y;j<Y+heigth;j++){
        for(i=X;i<X+length;i++){
            CPixel *p = _image->getPixel(i, j);
               p->Red(color.Red());
               p->Green(color.Green());
               p->Blue(color.Blue());
        }*/
    for(j=10;j<10+50;j++){
        for(i=10;i<10+80;i++){
            CPixel *p = _image->getPixel(i, j);
                   p->Red( 255 );
                   p->Green( 0 );
                   p->Blue( 0 );
    }
    }

}
