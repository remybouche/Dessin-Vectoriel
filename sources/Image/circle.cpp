#include "circle.h"

Circle::Circle(){
    Shape();
    setRadius(0);
}

/*
Circle::Circle(int _X, int _Y, int _radius, int _r, int _g, int _b, char _alpha){
    Shape(_X, _Y, _r, _g, _b, _alpha);
    setRadius(_radius);
}
*/

Circle::Circle(int _X, int _Y, int _radius, int _r, int _g, int _b, char _alpha) : Shape(_X, _Y, _r, _g, _b, _alpha){
    setRadius(_radius);
}


Circle::~Circle(){

}

void Circle::setRadius(int _radius){
    radius = _radius;
}

int Circle::getRadius(){
    return radius;
}


void Circle::draw(CImage *img){
    int i, j;
    for (j = Y-radius; j < Y+radius; j++){
        for (i = X-radius; i < X+radius; i++){
            if ( ( (i-X)*(i-X)+(j-Y)*(j-Y) ) < (radius*radius) ){
                CPixel *p = img->getPixel(i, j);
                *p = color;
            }

        }
    }
}

void Circle::drawTransparency(CImage *img){
    int i, j;
    for (j = Y-radius; j < Y+radius; j++){
        for (i = X-radius; i < X+radius; i++){
            if ( ( (i-X)*(i-X)+(j-Y)*(j-Y) ) < (radius*radius) ){
                CPixel *p = img->getPixel(i, j);
                p->Green( (  ((100-alpha)*(p->Green()))  +  alpha*color.Green() )/100) ;
            }

        }
    }
}


void Circle::check(){
    cout << "----------- CIRCLE PARAMETERS ------------" << endl;
    cout << "Size: " << getRadius() << " (radius)" << endl;
    cout << "Position: " << Shape::getX() << "*" << getY() << " (X,Y)" << endl;
    cout << "------------------------------------------" << endl;
}
