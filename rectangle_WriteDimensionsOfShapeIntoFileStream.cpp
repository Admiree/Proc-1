#include "stdafx.h"
#include "rectangle.h"
#include <fstream>

using namespace std;

namespace shapes {	
	void WriteDimensionsOfShapeIntoFileStream(rectangle &rectangle, ofstream &outFileStream) {
		outFileStream << "start X = " << rectangle.startX << ", start Y = " << rectangle.startY << ", end X = " << rectangle.endX << ", end Y = " << rectangle.endY;
	}
}