#include <iostream>
#include "../include/physics/world.h"
#include "../include/physics/collision.h"
#include <SFML/Graphics.hpp>

float SCREEN_WIDTH = 800;
float SCREEN_HEIGHT = 600;

int main(){

    physics::Body body(50, 5);
    body.setPosition(100, 100);
    body.set_x_velocity(0);
    body.set_y_velocity(1);

    physics::Body body2(50, 1);
    body2.setPosition(400, 400);
    body2.set_x_velocity(1); 
    body2.set_y_velocity(0);
    body2.setFillColor(sf::Color::Green);

    physics::Body body3(50, 1);
    body3.setPosition(400, 100);
    body3.set_x_velocity(-1);
    body3.set_y_velocity(1);
    body3.setFillColor(sf::Color::Blue);
    
    
    physics::World world(SCREEN_WIDTH, SCREEN_HEIGHT);
    world.addBody(body);
    world.addBody(body2);
    world.addBody(body3);
    
    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "My window");

    float timestep = 0.5;

    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }
        window.clear(sf::Color::Black);

        
        world.update_world(timestep);
        std::vector<physics::Body> bodies = world.get_bodies();

        for (int i = 0; i < bodies.size(); i++){
            window.draw(bodies[i]);
        }       
        

        window.display();
    }


    return 0;
}