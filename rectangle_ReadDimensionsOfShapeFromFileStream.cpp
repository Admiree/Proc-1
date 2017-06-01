#include "stdafx.h"
#include <fstream>
#include "rectangle.h"

using namespace std;

namespace shapes {	
	void ReadDimensionsOfShapeFromFileStream(rectangle &rectangle, ifstream &inFileStream) {
		inFileStream >> rectangle.startX >> rectangle.startY >> rectangle.endX >> rectangle.endY;
	}
}