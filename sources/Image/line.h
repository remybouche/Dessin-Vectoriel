#ifndef LIGNE_H
#define LIGNE_H

#include <iostream>
#include "Cligne.h"
#include "shape.h"

class Ligne : public Shape{

private:
    Coordinate endCoordinate;

public:
    Ligne();
    Ligne(struct Coordinate _coordinate, struct Coordinate _endCoordinate, int _r, int _g, int _b, char _transparency, int _scale);
    ~Ligne();

    struct Coordinate getEndCoordinate();
    void setEndCoordinate(struct Coordinate _endCoordinate);

    int caculateLength();
};




#endif // LIGNE_H
