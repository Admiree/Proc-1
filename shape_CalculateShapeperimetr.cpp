#include "stdafx.h"
#include <fstream>
#include "shape.h"

using namespace std;

namespace shapes {
	float CalculateShapePerimeter(rectangle &rectangle);
	float CalculateShapePerimeter(circle &circle);

	float CalculateShapePerimeter(shape &shape) {
		switch (shape._key) {
		case shape::key::RECTANGLE:
			return CalculateShapePerimeter(shape.rectangle);
		case shape::key::CIRCLE:
			return CalculateShapePerimeter(shape.circle);
			break;
		default:
			return NULL;
		}
	}
}
