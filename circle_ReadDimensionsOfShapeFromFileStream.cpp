#include "stdafx.h"
#include "circle.h"
#include <fstream>

using namespace std;

namespace shapes {
	void ReadDimensionsOfShapeFromFileStream(circle &circle, ifstream &inFileStream) {
		inFileStream >> circle.radius >> circle.centerX >> circle.centerY;
	}
}