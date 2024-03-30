#include "../../include/physics/collision.h"
#include <iostream>
#include <math.h>

bool physics::isCollision(physics::Body a, physics::Body b){
    /*
    sf::Vector2f a_pos = a.getShape().getPosition();
    sf::Vector2f b_pos = b.getShape().getPosition();

    float a_center_x = a_pos.x - a.getShape().getRadius();
    float a_center_y = a_pos.y - a.getShape().getRadius();

    float b_center_x = b_pos.x - b.getShape().getRadius();
    float b_center_y = b_pos.y - b.getShape().getRadius();

    //(x2-x1)^2 + (y2-y1)^2 <= (r1+r2)^2
    float x_distance = b_center_x - a_center_x;

    float y_distance = b_center_y - a_center_y;

    float distance = pow(x_distance, 2) + pow(y_distance, 2);
    if (distance == 0){
        return false;
    }

    return distance <= pow(a.getShape().getRadius() + b.getShape().getRadius(), 2);
    */

   sf::Vector2f a_pos = a.getPosition();
   sf::Vector2f b_pos = b.getPosition();

   sf::Vector2f a_center(a_pos.x - a.getRadius(), a_pos.y - a.getRadius());
   sf::Vector2f b_center(b_pos.x - b.getRadius(), b_pos.y - b.getRadius());

   float x_distance = b_center.x - a_center.x;
   float y_distance = b_center.y - a_center.y;

   float distance = pow(x_distance, 2) + pow(y_distance, 2);
   return distance <= pow(a.getRadius() + b.getRadius(), 2);

}
