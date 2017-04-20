#include "stdafx.h"
#ifndef _list
#define _list

namespace shapes 
{

	enum mask { RECTANGLE, CIRCLE, RECTANGLE_AND_CIRCLE };
	struct shape;
	struct listElement 
	{
		shape *shape;
		listElement *next = NULL;
	};	
	struct list
	{
		listElement *listHead;
		int listLength;
	};
}
#endif
