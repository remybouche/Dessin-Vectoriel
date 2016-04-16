#include "rectangle.h"


Rectangle::Rectangle(){
    //Shape(); enfaite on peut pas hériter des constructeurs et desstructeurs
    setXY(0, 0);
    color = CPixel();
    setAlpha(0);

    setLength(10);
    setHeigth(10);
}

Rectangle::Rectangle(int _X, int _Y, int _length, int _heigth, int _r, int _g, int _b, char _alpha){
    //Shape(_X, _Y, _r, _g, _b, _alpha);
    setXY(_X, _Y);
    color = CPixel(_r, _g, _b);
    setAlpha(_alpha);

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
    return(length);
}

int Rectangle::getHeigth(){
    return(heigth);
}

void Rectangle::showRectangle(CImage *_image){
    int i;
    int j;
   /* for(j=Rectangle::getY();j<Rectangle::getY()+heigth;j++){
        for(i=Rectangle::getX();i<Rectangle::getX()+length;i++){
            CPixel *p = _image->getPixel(i, j);
               p->Red(color.Red());
               p->Green(color.Green());
               p->Blue(color.Blue());
        }
    }
    */

    for(j=Y;j<Y+heigth;j++){
        for(i=X;i<X+length;i++){
            CPixel *p = _image->getPixel(i, j);
               p->Red(color.Red());
               p->Green(color.Green());
               p->Blue(color.Blue());
        }
    }
}
