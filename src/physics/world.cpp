#include "../../include/physics/world.h"

void physics::World::update_world(float timestep){
    for (int i = 0; i < bodies.size(); i++){
        bodies[i].update_body(timestep);
    }
}