#include "stdafx.h"

#ifndef _shape
#define _shape

#include "rectangle.h"
#include "circle.h"
#include "triangle.h"
#include <fstream>

using namespace std;

namespace shapes {	
	struct shape {

		enum key { RECTANGLE, CIRCLE, TRIANGLE };
		key _key;
		float plotn;
		enum color {RED = 1,ORANGE = 2,YELLOW = 3,GREEN = 4,CYAN = 5,BLUE = 6,MAGNETA = 7};
		color _color;
		union {
			triangle triangle;
			rectangle rectangle;
			circle circle;
		};
	};
}
#endif
