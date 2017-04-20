#include "stdafx.h"
#include <fstream>
#include "list.h"

using namespace std;

namespace shapes 
{
	void WriteInfoAboutShapeIntoFileStream(shape &outShape, ofstream &outFileStream);

	void PrintElements(list &list, ofstream &outFileStream) 
	{		
		outFileStream << "List contents " << list.listLength << " elements." << endl;
		listElement *temp = list.listHead;
		int num = list.listLength;

		while (temp != NULL) 
		{
			outFileStream << num << ": ";
			WriteInfoAboutShapeIntoFileStream(*(temp->shape), outFileStream);
			temp = temp->next;
			num--;
		}
	}
} 
