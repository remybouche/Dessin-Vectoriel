#include "shape.h"

Shape::Shape(){
    setCoordinate({0,0});
    color = CPixel(); // setColor à 0,0,0
    setTransparency(0);
    setScale(1);
}

Shape::Shape(struct Coordinate _coordinate, int _r, int _g, int _b, char _transparency, int _scale){
    setCoordinate(_coordinate);
    color = CPixel(_r, _g, _b); // setColorCPixel::RGB(int r, int g, int b)
    setTransparency(_transparency);
    setScale(_scale);
}

Shape::~Shape(){

}

void Shape::setCoordinate(struct Coordinate _coordinate){
    coordinate.x = _coordinate.x;
    coordinate.y = _coordinate.y;
}


void Shape::setTransparency(char _transparency){
    transparency = (_transparency>100)?100:_transparency;
    transparency = (transparency>=0)?transparency:0;
}

void Shape::applyTransparency(){

}

void Shape::setScale(int _scale){
    scale = (_scale>10)?10:_scale;
    scale = (scale>=1)?scale:1;
}

struct Coordinate Shape::getCoordinate(){
    return(coordinate);
}

char Shape::getTransparency(){
    return(transparency);
}

int Shape::getScale(){
    return(scale);
}
