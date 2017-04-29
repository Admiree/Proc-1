#include "stdafx.h"
#include "triangle.h"
#include <fstream>

using namespace std;

namespace shapes {
	void WriteDimensionsOfShapeIntoFileStream(triangle &triangle, ofstream &outFileStream) {
		outFileStream << "X =" << triangle.triangleX << ",  Y = " << triangle.triangleY << ",  Z = " << triangle.triangleZ;
	}
}