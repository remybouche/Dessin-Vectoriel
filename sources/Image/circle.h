#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "shape.h"

class Circle : public Shape{

private:
    int radius;

public:
    // Constructors
    Circle();
    Circle(int _X, int _Y, int _radius, int _r, int _g, int _b, char _alpha);
    ~Circle();

    // Setters
    void setRadius(int _radius);

    // Getters
    int getRadius();
};








#endif // CIRCLE_H
