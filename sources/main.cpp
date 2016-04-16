#include <QCoreApplication>

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include "./Format/CBitmap.h"

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
	CImage   *img = image->getImage(); //new CImage(size, size);

	// POUR CREER UNE IMAGE VIERGE NOUS AURIONS ECRIRE
	// 	CImage *img = new CImage(hauteur, largeur);

	// ON PASSE UN PIXEL A LA COULEUR ROUGE

	CPixel *p = img->getPixel(10, 10);
	p->Red( 255 );
    p->Green( 255 );
    p->Blue( 255 );

    Rectangle *test = new Rectangle(10, 20, 30, 40, 255, 0, 0, 100);
    Circle *test2 = new Circle(50, 70, 30, 0, 255, 0, 100);
    Line *test3 = new Line(90, 70, 200, 240, 0, 0, 255, 100);
    Circle *test4 = new Circle(50, 70, 40, 0, 255, 0, 50);


//    cout << test->getX() << " " << test->getY() << endl;
    //test->setLength(20);
    //test->setHeigth(20);
    //test->setXY(10, 10);
    test->check();
    test->draw(img);
    //test2->check();
    //test2->draw(img);
    test3->check();
    test3->draw(img);
    test4->check();
    test4->drawTransparency(img);

	cout << "(II) CBitmap image saving" << endl;
	image->SaveBMP(filename2);

    // test master
    // test masterj

	return 1;

    return a.exec();
}

