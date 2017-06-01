#include "stdafx.h"
#include <fstream>
#include "list.h"
#include "shape.h"

using namespace std;

namespace shapes {

	void WriteInfoAboutShapeIntoFileStream(shape &outShape, ostream &outFileStream);

	void PrintElementsByMask(list &list, ostream &outFileStream, mask mask) {
		outFileStream << "Итого." << endl;
		listElement *temp = list.listHead;

		while (temp != NULL) {
			switch (mask) {
			case RECTANGLE:
				if (temp->shape->_key == RECTANGLE) {
					WriteInfoAboutShapeIntoFileStream(*(temp->shape), outFileStream);
				}
				break;
			case CIRCLE:
				if (temp->shape->_key == CIRCLE) {
					WriteInfoAboutShapeIntoFileStream(*(temp->shape), outFileStream);
				}
				break;
			case RECTANGLE_AND_CIRCLE:
				WriteInfoAboutShapeIntoFileStream(*(temp->shape), outFileStream);
				break;
			default:

				break;
			}
			temp = temp->next;
		}
	}
}
