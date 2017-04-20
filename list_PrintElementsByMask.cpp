#include "stdafx.h"
#include <fstream>
#include "list.h"
#include "shape.h"

using namespace std;

namespace shapes 
{

	void WriteInfoAboutShapeIntoFileStream(shape &outShape, ofstream &outFileStream);

	void PrintElementsByMask(list &list, ofstream &outFileStream, mask mask) 
	{
		outFileStream << "Here they are." << endl;
		listElement *temp = list.listHead;

		while (temp != NULL) 
		{
			switch (mask)
			{
			case RECTANGLE:
				if (temp->shape->key == RECTANGLE) 
				{
					WriteInfoAboutShapeIntoFileStream(*(temp->shape), outFileStream);
				}
				break;
			case CIRCLE:
				if (temp->shape->key == CIRCLE) 
				{
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
