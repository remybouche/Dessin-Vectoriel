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

	cout << "(II) CBitmap image saving" << endl;
	image->SaveBMP(filename2);

	return 1;

    return a.exec();
}

