#include "stdafx.h"
#include <fstream>
#include "shape.h"

using namespace std;

namespace shapes {
	float CalculateShapePerimeter(shape &shape);
	void WriteDimensionsOfShapeIntoFileStream(rectangle &rectangle, ostream &outFileStream);
	void WriteDimensionsOfShapeIntoFileStream(circle  &circle, ostream &outFileStream);
	void WriteDimensionsOfShapeIntoFileStream(triangle  &triangle, ostream &outFileStream);
	
	
	void WriteInfoAboutShapeIntoFileStream(shape &outShape, ostream &outFileStream) {
		outFileStream << "Ýòî ";
		
		switch (outShape._key) {
		case shape::key::RECTANGLE:
			outFileStream << "Ïðÿìîóãîëüíèê";
			break;
		case shape::key::CIRCLE:
			outFileStream << "Êðóã";
			break; 
		case shape::key::TRIANGLE:
			outFileStream << "Òðåóãîëüíèê";
			break;
		default:
			break;
		}

		outFileStream << "; Öâåò ";
		string m[7] = { "ÊÐÀÑÍÛÉ", "ÎÐÀÍÆÅÂÛÉ", "ÆÅËÒÛÉ", "ÇÅËÅÍÛÉ", "ÁÈÐÞÇÎÂÛÉ", "ÃÎËÓÁÎÉ", "ÔÈÎËÅÒÎÂÛÉ" };

		int i = outShape._color - 1;
		outFileStream << m[i].c_str();

		outFileStream << "; Ðàçìåðíîñòè: ";

		switch (outShape._key) {
		case shape::key::RECTANGLE:
			WriteDimensionsOfShapeIntoFileStream(outShape.rectangle, outFileStream);
			break;
		case shape::key::CIRCLE:
			WriteDimensionsOfShapeIntoFileStream(outShape.circle, outFileStream);
			break;
		case shape::key::TRIANGLE:
			WriteDimensionsOfShapeIntoFileStream(outShape.triangle, outFileStream);
			break;
		default:
			break;
		}

		outFileStream << "Ïëîòíîñòü ðàâíà: " <<outShape.plotn;

		outFileStream << "; Ïåðèìåòð ðàâåí " << CalculateShapePerimeter(outShape);

		outFileStream << ";" << endl;
	}
}
