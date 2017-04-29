#include "stdafx.h"

#ifndef _shape
#define _shape

#include "rectangle.h"
#include "circle.h"
#include <fstream>

#define RED 1
#define ORANGE 2
#define YELLOW 3
#define GREEN 4
#define CYAN 5
#define BLUE 6
#define MAGNETA 7

using namespace std;

namespace shapes {	
	struct shape {
		enum key { RECTANGLE, CIRCLE };
		key key;
		int color;
		union {
			rectangle rectangle;
			circle circle;
		};
	};
}
#endif
