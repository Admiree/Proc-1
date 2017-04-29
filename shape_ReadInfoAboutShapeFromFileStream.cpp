#include "stdafx.h"
#include <fstream>
#include "shape.h"
#include "string.h"
#include <windows.h>
#include <cstring>
#include <iostream>


using namespace std;


namespace shapes {
	void ReadDimensionsOfShapeFromFileStream(rectangle &rectangle, ifstream &inFileStream);
	void ReadDimensionsOfShapeFromFileStream(circle  &circle, ifstream &inFileStream);
	
	shape* ReadInfoAboutShapeFromFileStream(ifstream &inFileStream) {
		shape *readShape;
		int key;		
		int _color;
		float _plotn;
		inFileStream >> key;
		inFileStream >> _color;	

		readShape = new shape;
		switch (key) {
		case 1:			
			readShape->_key = shape::key::RECTANGLE;
			ReadDimensionsOfShapeFromFileStream(readShape->rectangle, inFileStream);
			break;
		case 2:
			readShape->_key = shape::key::CIRCLE;
			ReadDimensionsOfShapeFromFileStream(readShape->circle, inFileStream);
			break;
		default:
			return NULL;
		}

		readShape->_color = (shape::color)_color;
		inFileStream >> _plotn;
		readShape->plotn =_plotn;


		return readShape;
	}
}
