#ifndef COLLISION_H
#define COLLISION_H
#include "body.h"

namespace physics {
    bool isCollisionWall(physics::Body a);
    bool isCollision(physics::Body a, physics::Body b);

}
#endif