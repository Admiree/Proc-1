#include "stdafx.h"
#include "circle.h"
#include <fstream>

using namespace std;

namespace shapes {
	void WriteDimensionsOfShapeIntoFileStream(circle &circle, ostream &outFileStream) {
		outFileStream << "радиус = " << circle.radius << ", центр X = " << circle.centerX << ", центр Y = " << circle.centerY << ";" << endl;
	}
}	