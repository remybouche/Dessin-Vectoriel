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
    CLigne   *lin = img->getLigne(2);

    int h = img->size();
    int l = lin->size();
    cout << "hauteur : " << h << endl;
    cout << "largeur : " << l << endl;

   //cout << "(II) creation d'une image vierge" << endl;
   //CImage *img = new CImage(256, 256);

	// ON PASSE UN PIXEL A LA COULEUR ROUGE
   //CPixel *p = img->getPixel(10, 10);
   // p->Red( 255 );
   // p->Green( 255 );
   // p->Blue( 255 );


    // test des showShapes()
    Circle *circle1 = new Circle(130,50,100,255,0,0,100);
    //Rectangle *rectangle1 = new Rectangle(30,30,200,60,255,255,0,100);

    //rectangle1->showRectangle(img);
    circle1->showCircle(img);

    cout << "(II) CBitmap image saving" << endl;
	image->SaveBMP(filename2);

	return 1;

    return a.exec();
}

