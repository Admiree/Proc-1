#include <fstream>
#include <iostream>
#ifndef _protect
#define _protect

using namespace std;

	void CheckInputFile(ifstream &inFileStream);
	void CheckWrongInput(ifstream &inFileStream);
	void CheckOutputFile(ostream &outFileStream);
	void CheckRadius(int radius);
	void CheckKey(int key);
	void CheckColor(int color);

#endif