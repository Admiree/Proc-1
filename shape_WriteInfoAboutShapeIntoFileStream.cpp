#include "stdafx.h"
#include <fstream>
#include "shape.h"
#include <cstring>

using namespace std;

namespace shapes {
	float CalculateShapePerimeter(shape &shape);
	void WriteDimensionsOfShapeIntoFileStream(rectangle &rectangle, ofstream &outFileStream);
	void WriteDimensionsOfShapeIntoFileStream(circle  &circle, ofstream &outFileStream);
	
	
	void WriteInfoAboutShapeIntoFileStream(shape &outShape, ofstream &outFileStream) {
		outFileStream << "It is ";
		
		switch (outShape._key) {
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
		string m[7] = { "RED", "ORANGE", "YELLOW", "GREEN", "CYAN", "BLUE", "MAGNETA" };

		int i = outShape._color - 1;
		outFileStream << m[i].c_str();

		outFileStream << "; And its dimensions are: ";

		switch (outShape._key) {
		case shape::key::RECTANGLE:
			WriteDimensionsOfShapeIntoFileStream(outShape.rectangle, outFileStream);
			break;
		case shape::key::CIRCLE:
			WriteDimensionsOfShapeIntoFileStream(outShape.circle, outFileStream);
			break;
		default:
			break;
		}

		outFileStream << "; Plotnost: " <<outShape.plotn;

		outFileStream << "; Its perimeter is " << CalculateShapePerimeter(outShape);

		outFileStream << ";" << endl;
	}
}
