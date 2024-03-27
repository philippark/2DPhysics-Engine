#include "../../include/physics/body.h"

#include <iostream>

void physics::Body::set_position(float x, float y){
    shape.setPosition(x, y);
}


void physics::Body::move(float timestep) {
    shape.move(x_velocity * timestep, y_velocity * timestep);
}