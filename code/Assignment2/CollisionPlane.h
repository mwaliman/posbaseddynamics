#pragma once

#include "MathLib/P3D.h"
#include "MathLib/V3D.h"

class CollisionPlane {
// private:

public:
	P3D pointOnPlane;
	V3D normal;
	CollisionPlane(P3D p, V3D n);
	P3D handleCollision(P3D point);
};
