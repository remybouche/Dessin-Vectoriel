#ifndef LINE_H
#define LINE_H

#include "CImage.h"
#include <iostream>
#include "shape.h"

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

    //Others
    void draw(CImage *img);
    void check();
    int min(int a, int b);
    int max(int a, int b);
    int interpolate(int x);

};


#endif
