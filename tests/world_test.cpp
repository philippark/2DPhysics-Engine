#include <iostream>
#include "../include/physics/world.h"
#include "../include/physics/body.h"
#include <SFML/Graphics.hpp>

int main(){
    sf::CircleShape circle(50);
    circle.setFillColor(sf::Color::Green);
    circle.setPosition(10.f, 10.f);

    physics::Body body(&circle, 0);
    

    physics::World world;
    world.addBody(body);


    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }
        window.clear(sf::Color::Black);


        window.draw(*(body.getShape()));

        window.display();
    }

}
