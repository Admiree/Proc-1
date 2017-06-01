#include "stdafx.h"
#include <fstream>
#include "list.h"

using namespace std;

namespace shapes {

	void WriteInfoAboutShapeIntoFileStream(shape &outShape, ostream &outFileStream);

	void PrintElements(list &list, ostream &outFileStream) {
		outFileStream << "В контейнере " << list.listLength << " элементов." << endl;
		listElement *temp = list.listHead;
		int num = list.listLength;

		while (temp != NULL) {
			outFileStream << num << ": ";
			//temp->shape;
			WriteInfoAboutShapeIntoFileStream(*(temp->shape), outFileStream);
			temp = temp->next;
			num--;
		}
	}
} 
