#include "stdafx.h"
#include <fstream>
#include "list.h"

using namespace std;

namespace shapes {
	shape *ReadInfoAboutShapeFromFileStream(ifstream &inFileStream);

	void LoadElements(list &list, ifstream &inFileStream) {
		while (!inFileStream.eof()) {
			listElement *temp = new listElement;
			temp->shape = ReadInfoAboutShapeFromFileStream(inFileStream);
			temp->next = list.listHead;
			list.listHead = temp;
			list.listLength++;
		}

	}
} 
