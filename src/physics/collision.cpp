#include "../../include/physics/collision.h"


bool physics::isCollision(physics::Body a, physics::Body b){
    sf::CircleShape a_shape = a.getShape();
    sf::CircleShape b_shape = b.getShape();

    const bool collides = a_shape.getGlobalBounds().intersects(b_shape.getGlobalBounds());

    return collides;
}