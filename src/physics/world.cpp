#include "../../include/physics/world.h"

#include <iostream>

void physics::World::update_world(float timestep){


    //wall collision
    for (int i = 0; i < bodies.size(); i++){
        sf::Vector2f position = bodies[i].getPosition();

        //bounce off bottom
        if (position.y + 2*bodies[i].getRadius() > screen_height){
            bodies[i].set_y_velocity(-bodies[i].get_y_velocity() * bodies[i].get_energy_loss());
            bodies[i].setPosition(position.x, screen_height - 2*bodies[i].getRadius());
        }
    
        //bounce off top
        if (position.y < 0){
            bodies[i].set_y_velocity(-bodies[i].get_y_velocity() * bodies[i].get_energy_loss());
            bodies[i].setPosition(position.x, 0);
        }

        //bounce off right 
        if (position.x + 2*bodies[i].getRadius() > screen_width){
            bodies[i].set_x_velocity(-bodies[i].get_x_velocity() * bodies[i].get_energy_loss());
            bodies[i].setPosition(screen_width - 2*bodies[i].getRadius(), position.y);
        }

        //bounce off left 
        if (position.x < 0){
            bodies[i].set_x_velocity(-bodies[i].get_x_velocity() * bodies[i].get_energy_loss());
            bodies[i].setPosition(0, position.y);
        }
    }

    //particle collision
    for (int i = 0; i < bodies.size(); i++){
        for (int j = i+1; j < bodies.size(); j++){
            if (physics::isCollision(bodies[i], bodies[j])){
                std::cout << "collided" << std::endl;

                float x_vel = bodies[i].get_x_velocity();
                float y_vel = bodies[i].get_y_velocity();
                
                bodies[i].set_x_velocity(bodies[j].get_x_velocity());
                bodies[i].set_y_velocity(bodies[j].get_y_velocity());

                
                bodies[j].set_x_velocity(x_vel);
                bodies[j].set_y_velocity(y_vel);

            }
            
            
        }
        
    }

    for (int i = 0; i < bodies.size(); i++){
        bodies[i].move(bodies[i].get_x_velocity() * timestep, bodies[i].get_y_velocity() * timestep);
        bodies[i].set_y_velocity(bodies[i].get_y_velocity() + bodies[i].get_y_acceleration());
        bodies[i].set_x_velocity(bodies[i].get_x_velocity() + bodies[i].get_x_acceleration());
    }
    
}

