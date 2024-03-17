#include "../../include/physics/body.h"

#include <iostream>

void physics::Body::set_position(float x, float y){
    std::cout << "position set to " << x << " " << y << std::endl;
    shape->setPosition(x, y);

    sf::Vector2f position = shape->getPosition(); 
    std::cout << "position: " << position.x << std::endl;
}


void physics::Body::update_body(float timestep) {
    shape->move(x_velocity * timestep, y_velocity * timestep);
}