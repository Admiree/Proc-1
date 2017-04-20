#include "stdafx.h"
#include "triangle.h"
#include <fstream>

using namespace std;

namespace shapes
{
	void WriteDimensionsOfShapeIntoFileStream(triangle &triangle, ofstream &outFileStream)
	{
		outFileStream << "It's triangle: " << "X = " << triangle.triangleX << ", Y = " << triangle.triangleY << ", Z = " << triangle.triangleZ;
	}
}