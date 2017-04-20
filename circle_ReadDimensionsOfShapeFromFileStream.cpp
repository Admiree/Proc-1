#include "stdafx.h"
#include "circle.h"
#include <fstream>
#include "protect.h"

using namespace std;

namespace shapes 
{
	void ReadDimensionsOfShapeFromFileStream(circle &circle, ifstream &inFileStream) 
	{
		CheckInputFile(inFileStream);
		inFileStream >> circle.radius >> circle.centerX >> circle.centerY;
		CheckRadius(circle.radius);
	}
}