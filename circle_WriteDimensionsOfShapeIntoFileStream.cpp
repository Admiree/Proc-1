#include "stdafx.h"
#include "circle.h"
#include <fstream>

using namespace std;

namespace shapes {
	void WriteDimensionsOfShapeIntoFileStream(circle &circle, ostream &outFileStream) {
		outFileStream << "������ = " << circle.radius << ", ����� X = " << circle.centerX << ", ����� Y = " << circle.centerY << ";" << endl;
	}
}	