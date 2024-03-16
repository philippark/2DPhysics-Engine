#include <iostream>
#include "../include/physics/body.h"
#include <SFML/Graphics.hpp>

int main(){
    sf::CircleShape circle(50);

    float mass = 0;
    physics::Body body(&circle, mass);
    
    sf::Shape* shape = body.getShape();

    shape->setFillColor(sf::Color(100, 250, 50));

}
