#ifndef RETANGLE_H
#define RETANGLE_H

class Rectangle : public Shape{

private:
    int lenght;
    int hight;

public:
    R();
    Ligne(struct Coordinate _coordinate, struct Coordinate _endCoordinate, int _r, int _g, int _b, char _transparency, int _scale);
    ~Ligne();

    struct Coordinate getEndCoordinate();
    void setEndCoordinate(struct Coordinate _endCoordinate);

    int caculateLength();
};







#endif // RETANGLE_H
