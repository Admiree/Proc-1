#include "stdafx.h"
#include <fstream>
#include "shape.h"
#include "protect.h"

using namespace std;

namespace shapes 
{
	void ReadDimensionsOfShapeFromFileStream(rectangle &rectangle, ifstream &inFileStream);
	void ReadDimensionsOfShapeFromFileStream(circle  &circle, ifstream &inFileStream);
	void ReadDimensionsOfShapeFromFileStream(triangle  &triangle, ifstream &inFileStream);
	
	shape* ReadInfoAboutShapeFromFileStream(ifstream &inFileStream)
	{
		shape *readShape;
		int key;		
		int color;
		float plotn;

		CheckInputFile(inFileStream);
		inFileStream >> key;
		CheckKey(key);
		inFileStream >> color;
		CheckColor(color);

		readShape = new shape;

		switch (key) 
		{
		case 1:			
			readShape->key = shape::key::RECTANGLE;
			ReadDimensionsOfShapeFromFileStream(readShape->rectangle, inFileStream);
			break;
		case 2:
			readShape->key = shape::key::CIRCLE;
			ReadDimensionsOfShapeFromFileStream(readShape->circle, inFileStream);
			break;
		case 3:
			readShape->key = shape::key::TRIANGLE;
			ReadDimensionsOfShapeFromFileStream(readShape->triangle, inFileStream);
			break;
		default:
			return NULL;
		}


		readShape->_color = (shape::color)color;
		inFileStream >> plotn;
		readShape->plotn = plotn;



		return readShape;
	}
}
