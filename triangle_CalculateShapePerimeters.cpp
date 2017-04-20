#include "stdafx.h"
#include "triangle.h"
#include <math.h>

using namespace std;

namespace shapes 
{
	float CalculateShapePerimeter(triangle &triangle) 
	{
		return (triangle.triangleX+triangle.triangleY+triangle.triangleZ);
	}
}
