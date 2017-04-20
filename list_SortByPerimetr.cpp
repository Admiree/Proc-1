#include "stdafx.h"
#include <fstream>
#include "list.h"
#include "shape.h"

using namespace std;

namespace shapes {

	float CalculateShapePerimeter(shape &shape);

	void SortByPerimeter(list &list)
	{
		listElement *current = list.listHead, *temp = NULL, *previous = NULL;
		bool flag = false;

		do
		{
			flag = false;
			current = list.listHead;
			while (current->next) 
			{
				if (CalculateShapePerimeter(*(current->shape)) > CalculateShapePerimeter(*(current->next->shape)))
				{
					if (current == list.listHead) 
					{
						temp = current;
						current = temp->next;
						temp->next = current->next;
						current->next = temp;
						list.listHead = current;
						flag = true;
					}
					else
					{
						temp = current;
						current = temp->next;
						temp->next = current->next;
						current->next = temp;
						previous->next = current;
						flag = true;
					}
				}
				previous = current;
				current = current->next;
			}
		} while (flag);

	}
}
