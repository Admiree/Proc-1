#include "stdafx.h"
#include "rectangle.h"
#include <fstream>

using namespace std;

namespace shapes {	
	void WriteDimensionsOfShapeIntoFileStream(rectangle &rectangle, ostream &outFileStream) {
		outFileStream << "����� X = " << rectangle.startX << ", ����� Y = " << rectangle.startY << ", ����� X = " << rectangle.endX << ", ����� Y = " << rectangle.endY << ";" << endl;
	}
}