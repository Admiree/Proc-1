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
		outFileStream << "��� ";
		
		switch (outShape._key) {
		case shape::key::RECTANGLE:
			outFileStream << "�������������";
			break;
		case shape::key::CIRCLE:
			outFileStream << "����";
			break; 
		case shape::key::TRIANGLE:
			outFileStream << "�����������";
			break;
		default:
			break;
		}

		outFileStream << "; ���� ";
		string m[7] = { "�������", "���������", "������", "�������", "���������", "�������", "����������" };

		int i = outShape._color - 1;
		outFileStream << m[i].c_str();

		outFileStream << "; �����������: ";

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

		outFileStream << "��������� �����: " <<outShape.plotn;

		outFileStream << "; �������� ����� " << CalculateShapePerimeter(outShape);

		outFileStream << ";" << endl;
	}
}
