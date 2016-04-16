#include "circle.h"

Circle::Circle(){
    //Shape(); enfaite on peut pas hériter des constructeurs et desstructeurs
    setXY(0, 0);
    color = CPixel();
    setAlpha(0);

    setRadius(0);
}

Circle::Circle(int _X, int _Y, int _radius, int _r, int _g, int _b, char _alpha){
    //Shape(_X, _Y, _r, _g, _b, _alpha);
    setXY(_X, _Y);
    color = CPixel(_r, _g, _b);
    setAlpha(_alpha);

    setRadius(_radius);
}

Circle::~Circle(){

}

void Circle::setRadius(int _radius){
    radius = (_radius>=0)?_radius:-_radius;
}

void Circle::showCircle(CImage *_image){

    int h = _image->size();
    CLigne   *lin = _image->getLigne(1);
    int l = lin->size();

    for(int j=0;j<h;j++){
        for(int i=0;i<l;i++){
            int c;
            c = (i - X)*(i - X) + (j - Y)*(j - Y);
            if(c < radius*radius){
                CPixel *p = _image->getPixel(i, j);
                p->Red(color.Red());
                p->Green(color.Green());
                p->Blue(color.Blue());
            }
        }
    }

}
