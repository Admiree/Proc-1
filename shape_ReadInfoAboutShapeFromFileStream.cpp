#include "stdafx.h"
#include <fstream>
#include "shape.h"

using namespace std;

namespace shapes {
	void ReadDimensionsOfShapeFromFileStream(rectangle &rectangle, ifstream &inFileStream);
	void ReadDimensionsOfShapeFromFileStream(circle  &circle, ifstream &inFileStream);
	
	shape* ReadInfoAboutShapeFromFileStream(ifstream &inFileStream) {
		shape *readShape;
		int key;
		int color;

		inFileStream >> key;
		inFileStream >> color;

		readShape = new shape;

		switch (key) {
		case 1:			
			readShape->key = shape::key::RECTANGLE;
			ReadDimensionsOfShapeFromFileStream(readShape->rectangle, inFileStream);
			break;
		case 2:
			readShape->key = shape::key::CIRCLE;
			ReadDimensionsOfShapeFromFileStream(readShape->circle, inFileStream);
			break;
		default:
			return NULL;
		}
		readShape->color = color;

		return readShape;
	}
}
