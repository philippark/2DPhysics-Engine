#include "../../include/physics/collision.h"


bool physics::Collision::isCollision(physics::Body a, physics::Body b){
    sf::CircleShape a_shape = a.getShape();
    sf::CircleShape b_shape = b.getShape();

    return a_shape.getGlobalBounds().intersects(b_shape.getGlobalBounds());
}