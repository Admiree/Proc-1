#include "stdafx.h"
#include "list.h"
#include "shape.h"

namespace shapes 
{
	void Init(list &list) { list.listLength = 0; list.listHead = NULL; }
	void Clear(list &list) 
	{
		while (list.listHead != NULL) 
		{
			listElement *temp = list.listHead->next;
			delete list.listHead;
			list.listHead = temp;
		}
		list.listLength = 0;
	}
}
