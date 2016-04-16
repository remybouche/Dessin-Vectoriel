#include "line.h"

Line::Line(){
    //Shape();
    setXY(0, 0);
    color = CPixel();
    setAlpha(0);

    setXY2(0,0);
}

Line::Line(int _X, int _Y, int _X2, int _Y2, int _r, int _g, int _b, char _alpha){
    //Shape(_X, _Y, _r, _g, _b, _alpha);
    setXY(_X, _Y);
    color = CPixel(_r, _g, _b);
    setAlpha(_alpha);

    setXY2(_X2, _Y2);
}

Line::~Line(){

}

void Line::setXY2(int _X2, int _Y2){
    X2 = (_X2>=0)?_X2:-_X2;
    Y2 = (_Y2>=0)?_Y2:-_Y2;
}


void Line::showLine(CImage *_image){

    int a = ceil((Y2 - Y) / (X2 - X)); // surrement étude de cas (ceil,floor)
    int b = Y - a*X;
    int eqL;

    for(int j=Y;j<=Y2;j++){
        for(int i=X;i<=X2;i++){
            eqL = j - a*i - b;
            if(!eqL){
                CPixel *p = _image->getPixel(i, j);
                p->Red(color.Red());
                p->Green(color.Green());
                p->Blue(color.Blue());
            }
        }
    }

}
