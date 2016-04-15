#ifndef LINE_H
#define LINE_H

#include <iostream>
#include "shape.h"

using namespace std;

class Line : public Shape{

private:
    int X2;
    int Y2;

public:
    // Constructors
    Line();
    Line(int _X, int _Y, int X2, int Y2, int _r, int _g, int _b, char _alpha);
    ~Line();

    // Setters
    void setXY2(int _X2, int _Y2);

    // Getters
    int getX2();
    int getY2();
};


#endif
