#include "CollisionPlane.h"
#include <iostream>
using namespace std;

CollisionPlane::CollisionPlane(P3D p, V3D n) {
	pointOnPlane = p;
	normal = n.normalized();
}

// If the given point is colliding with this plane, returns
// the projection of that point onto this plane.
// Otherwise, returns the same point.
P3D CollisionPlane::handleCollision(P3D point)
{
	// TODO: implement collision handling with planes.
	if((point - this->pointOnPlane).dot(this->normal) >= 0){
		return point;
	} else{
		V3D v = point - this->pointOnPlane;
		double dist = v.dot(this->normal);
		point -= (this->normal*dist);
		return point;
	}
}
