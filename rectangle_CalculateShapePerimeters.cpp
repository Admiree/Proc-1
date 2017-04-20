#include "stdafx.h"
#include "rectangle.h"
#include <math.h>

using namespace std;

namespace shapes 
{
	float CalculateShapePerimeter(rectangle &rectangle) 
	{
		return (abs(2 * (rectangle.endX - rectangle.startX)) + abs(2 * (rectangle.endY - rectangle.startY)));
	}
}
