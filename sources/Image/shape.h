#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include "CPixel.h"

using namespace std;

class Shape{

protected:
    int X;
    int Y;
    CPixel color; // RGB triplet
    char alpha; // Transparency : 0-100

public:
    // Constructors
    Shape();
    Shape(int _X, int_Y, int _r, int _g, int _b, char _alpha);
    ~Shape();

    // Getters
    int getX();
    int getY();
    char getAlpha();

    // Setters
    void setXY(int _X, int _Y);
    void setAlpha(char _alpha);

};

#endif
