#include "stdafx.h"
#include "protect.h"

void CheckInputFile(ifstream &inFileStream)
{
	if (!inFileStream)
	{
		cerr << "Error: no input file!" << endl;
		exit(1);
	}
}

void CheckWrongInput(ifstream &inFileStream)
{
	if (inFileStream.fail())
	{
		cout << "Wrong input!" << endl;
		exit(1);
	}
}

void CheckOutputFile(ostream &outFileStream)
{
	if (!outFileStream)
	{
		cerr << "Error: no output file!" << endl;
		exit(1);
	}
}

void CheckRadius(int radius)
{
	if (radius <= 0)
	{
		cout << "Incorrect input radius." << endl;
		exit(1);
	}
}

void CheckKey(int key)
{
	if (key <= 0)
	{
		cout << "Incorrect input key." << endl;
		exit(1);
	}
}

void CheckColor(int color)
{
	if (color <= 0)
	{
		cout << "Incorrect input color." << endl;
		exit(1);
	}
}