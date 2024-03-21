#include "../../include/physics/world.h"

#include <iostream>

void physics::World::update_world(float timestep){
    for (int i = 0; i < bodies.size(); i++){
        bodies[i].update_body(timestep);
    }

    for (int i = 0; i < bodies.size(); i++){
        for (int j = i+1; j < bodies.size(); j++){
            if (physics::isCollision(bodies[i], bodies[j])){
                std::cout << "collided" << std::endl;
                bodies[i].set_x_velocity(-1 * bodies[i].get_x_velocity());
                bodies[i].set_y_velocity(-1 * bodies[i].get_y_velocity());

                bodies[j].set_x_velocity(-1 * bodies[j].get_x_velocity());
                bodies[j].set_y_velocity(-1 * bodies[j].get_y_velocity());
                

            }
            
            
        }
        
    }
}