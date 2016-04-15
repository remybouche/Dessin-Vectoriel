#include <QCoreApplication>

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include "./Format/CBitmap.h"

#include "./Image/rectangle.h"
#include "./Image/line.h"
#include "./Image/circle.h"


int main(int argc, char * argv[]) {

    QCoreApplication a(argc, argv);

	cout << "(II) P_Bitmap exection start (" << __DATE__ << " - " << __TIME__ << ")" << endl;

	cout << "(II) CBitmap object creation" << endl;
	CBitmap *image   = new CBitmap();
    string filename  = "Entree.bmp";
    string filename2 = "Sortie.bmp";

    cout << "(II) CBitmap image loading" << endl;
    image->LoadBMP( filename );

    cout << "(II) CImage pointer extraction" << endl;
    CImage   *img = image->getImage();


   //cout << "(II) creation d'une image vierge" << endl;
   //CImage *img = new CImage(256, 256);

	// ON PASSE UN PIXEL A LA COULEUR ROUGE
   //CPixel *p = img->getPixel(10, 10);
   // p->Red( 255 );
   // p->Green( 255 );
   // p->Blue( 255 );

    //int i;
    //int j;
    //for(j=10;j<10+50;j++){
        //for(i=10;i<10+80;i++){
            //CPixel *p = img->getPixel(i, j);
               //p->Red( 255 );
               //p->Green( 0 );
               //p->Blue( 0 );
        //}
    //}

    // test des showShapes()
    //Shape *shape1 = new Shape(10,10,255,0,0,100);
    Circle *circle1 = new Circle(10,10,20,255,0,0,100);
    Rectangle *rectangle1 = new Rectangle(10,10,30,40,255,0,0,100);

    rectangle1->showRectangle(img);

    cout << "(II) CBitmap image saving" << endl;
	image->SaveBMP(filename2);

    // test master
    // test masterj

	return 1;

    return a.exec();
}

