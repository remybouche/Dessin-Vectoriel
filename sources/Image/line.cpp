#include "ligne.h"

Ligne::Ligne(){
    setCoordinate({0,0});
    setEndCoordinate({0,0});
    color = CPixel(); // setColor à 0,0,0
    setTransparency(0);
    setScale(1);
}

Ligne::Ligne(struct Coordinate _coordinate, struct Coordinate _endCoordinate, int _r, int _g, int _b, char _transparency, int _scale){
    setCoordinate(_coordinate);
    setEndCoordinate(_endCoordinate);
    color = CPixel(_r, _g, _b);; // setColorCPixel::RGB(int r, int g, int b)
    setTransparency(_transparency);
    setScale(_scale);
}

Ligne::~Ligne(){

}

void Ligne::setEndCoordinate(struct Coordinate _endCoordinate){
    endCoordinate.x = _endCoordinate.x;
    endCoordinate.y = _endCoordinate.y;
}

int Ligne::caculateLength(){

}
