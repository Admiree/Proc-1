#include "stdafx.h"
#include "rectangle.h"
#include <fstream>

using namespace std;

namespace shapes {	
	void WriteDimensionsOfShapeIntoFileStream(rectangle &rectangle, ostream &outFileStream) {
		outFileStream << "старт X = " << rectangle.startX << ", старт Y = " << rectangle.startY << ", конец X = " << rectangle.endX << ", конец Y = " << rectangle.endY << ";" << endl;
	}
}