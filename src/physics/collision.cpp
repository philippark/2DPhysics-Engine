#include "../../include/physics/collision.h"
#include <iostream>
#include <math.h>

bool physics::isCollision(physics::Body a, physics::Body b){

   sf::Vector2f a_pos = a.getPosition();
   sf::Vector2f b_pos = b.getPosition();

   sf::Vector2f a_center(a_pos.x - a.getRadius(), a_pos.y - a.getRadius());
   sf::Vector2f b_center(b_pos.x - b.getRadius(), b_pos.y - b.getRadius());

   float x_distance = b_center.x - a_center.x;
   float y_distance = b_center.y - a_center.y;

   float distance = pow(x_distance, 2) + pow(y_distance, 2);
   return distance <= pow(a.getRadius() + b.getRadius(), 2);

}
