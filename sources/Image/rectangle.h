#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "shape.h"

class Rectangle : public Shape{

private:
    int heigth;
    int length;

public:
    // Constructors
    Rectangle();
    Rectangle(int _X, int _Y, int _heigth, int _length, int _r, int _g, int _b, char _alpha);
    ~Rectangle();

    // Setters
    void setLength(int _length);
    void setHeigth(int _heigth);


    // Getters
    int getHeigth();
    int getLength();
};


#endif


