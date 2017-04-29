#include "stdafx.h"
#include <fstream>
#include "shape.h"

using namespace std;

namespace shapes {
	void WriteDimensionsOfShapeIntoFileStream(rectangle &rectangle, ofstream &outFileStream);
	void WriteDimensionsOfShapeIntoFileStream(circle  &circle, ofstream &outFileStream);
	
	void WriteInfoAboutShapeIntoFileStream(shape &outShape, ofstream &outFileStream) {
		outFileStream << "It is ";
		
		switch (outShape.key) {
		case shape::key::RECTANGLE:
			outFileStream << "Rectangle";
			break;
		case shape::key::CIRCLE:
			outFileStream << "Circle";
			break;
		default:
			break;
		}

		outFileStream << "; Its color is ";

		switch (outShape.color) {
		case RED:
			outFileStream << "RED";
			break;
		case ORANGE:
			outFileStream << "ORANGE";
			break;
		case YELLOW:
			outFileStream << "YELLOW";
			break;
		case GREEN:
			outFileStream << "GREEN";
			break;
		case CYAN:
			outFileStream << "CYAN";
			break;
		case BLUE:
			outFileStream << "BLUE";
			break;
		case MAGNETA:
			outFileStream << "MAGNETA";
			break;
		}

		outFileStream << "; And its dimensions are: ";

		switch (outShape.key) {
		case shape::key::RECTANGLE:
			WriteDimensionsOfShapeIntoFileStream(outShape.rectangle, outFileStream);
			break;
		case shape::key::CIRCLE:
			WriteDimensionsOfShapeIntoFileStream(outShape.circle, outFileStream);
			break;
		default:
			break;
		}

		outFileStream << ";" << endl;
	}
}
