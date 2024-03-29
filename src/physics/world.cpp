#include "../../include/physics/world.h"

#include <iostream>

void physics::World::update_world(float timestep){
    for (int i = 0; i < bodies.size(); i++){
        bodies[i].move(timestep);
    }

    for (int i = 0; i < bodies.size(); i++){
        sf::CircleShape body = bodies[i].getShape();
        sf::Vector2f position =body.getPosition();

        //bound off bottom
        if (position.y + 2*body.getRadius() > screen_height){
            bodies[i].set_y_velocity(-bodies[i].get_y_velocity());
            body.setPosition(position.x, screen_height - 2*body.getRadius());
        }

        //bounce off top
        if (position.y < 0){
            bodies[i].set_y_velocity(-bodies[i].get_y_velocity());
            body.setPosition(position.x, 0);
        }

        //bounce off right 
        if (position.x + 2*body.getRadius() > screen_width){
            bodies[i].set_x_velocity(-bodies[i].get_x_velocity());
            body.setPosition(screen_width - 2*body.getRadius(), position.y);
        }

        //bounce off left 
        if (position.x < 0){
            bodies[i].set_x_velocity(-bodies[i].get_x_velocity());
            body.setPosition(0, position.y);
        }
    }

    
    for (int i = 0; i < bodies.size(); i++){
        for (int j = i+1; j < bodies.size(); j++){
            
            if (physics::isCollision(bodies[i], bodies[j])){
                std::cout << "collided" << std::endl;
                float i_x = bodies[i].get_x_velocity();
                float i_y = bodies[i].get_y_velocity();
                bodies[i].set_x_velocity(bodies[j].get_x_velocity());
                bodies[i].set_y_velocity(bodies[j].get_y_velocity());

                
                bodies[j].set_x_velocity(i_x);
                bodies[j].set_y_velocity(i_y);

            }
            
            
        }
        
    }
    
}


//now collide with walls