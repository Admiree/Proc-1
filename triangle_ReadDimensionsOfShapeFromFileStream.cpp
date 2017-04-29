#include "stdafx.h"
#include "triangle.h"
#include <fstream>

using namespace std;

namespace shapes {
	void ReadDimensionsOfShapeFromFileStream(triangle &triangle, ifstream &inFileStream) {
		inFileStream >> triangle.triangleX >> triangle.triangleY >> triangle.triangleZ;
	}
}