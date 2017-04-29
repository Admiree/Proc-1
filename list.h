#include "stdafx.h"

#ifndef _list
#define _list

namespace shapes {

	struct shape;

	struct listElement {
		shape *shape;
		listElement *next = NULL;
	};	
	
	struct list {
		listElement *listHead;
		int listLength;
	};
}
#endif
