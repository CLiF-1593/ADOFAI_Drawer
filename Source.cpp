#include <Magick++.h>
#include <iostream>
#include "Drawer.h"

using namespace Magick;
using namespace std;

int main(int argc, char **argv) {
	InitializeMagick(*argv);
	Drawer drawer;
	cout << "[ ADOFAI Drawer ]" << endl << endl;
	cout << "이미지를 맵으로 변환해줍니다. (투명한 픽셀은 제외시켜줍니다)" << endl;
	cout << "Developer : CLiF" << endl;
	cout << "Version : v 1.1" << endl << endl;

	cout << "Image Path : ";
	string img;
	cin >> img;

	cout << "Adofai Map Path : ";
	string adofai;
	cin >> adofai;

	cout << "Start Tile Number ( n > 0 ) : ";
	unsigned int tile;
	cin >> tile;

	cout << "Tile Style (Standard, Neon, NeonLight, Basic, Gems) : ";
	string type;
	cin >> type;

	cout << "Setting . . . " << endl;
	drawer.SetImageFile(img);
	cout << "Drawing . . . " << endl;
	drawer.DrawData();
	cout << "Saving . . . " << endl;
	drawer.SaveData(adofai, tile, type);
	drawer.Save(adofai);
	cout << "Completed" << endl;
	system("pause");
	return 0;
}