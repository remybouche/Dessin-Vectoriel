#ifndef SHAPE_H
#define SHAPE_H


#include <iostream>
#include "CPixel.h"


using namespace std;

struct Coordinate
{
    int x; // double
    int y;
};


class Shape{
protected:
    Coordinate coordinate;
    CPixel color; // user chooses RGV
    char transparency;
    int scale;

public:
    Shape();
    Shape(struct Coordinate _coordinate, int _r, int _g, int _b, char _transparency, int _scale);

    ~Shape();

    struct Coordinate getCoordinate();
    void setCoordinate(struct Coordinate _coordinate);

    // set et get de CPixel

    char getTransparency();
    void setTransparency(char _transparency);
    void applyTransparency();

    int getScale();
    void setScale(int _scale);

};


#endif // SHAPE_H
