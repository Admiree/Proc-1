#include "stdafx.h"
#include "circle.h"
#include <fstream>

using namespace std;

namespace shapes
{
	void WriteDimensionsOfShapeIntoFileStream(circle &circle, ofstream &outFileStream) 
	{
		outFileStream << "It's circle: " << "radius = " << circle.radius << ", center X = " << circle.centerX << ", center Y = " << circle.centerY;
	}
}	