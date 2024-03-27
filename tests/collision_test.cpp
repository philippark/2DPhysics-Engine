#include <iostream>
#include "../include/physics/world.h"
#include "../include/physics/collision.h"
#include <SFML/Graphics.hpp>

float SCREEN_HEIGHT = 800;
float SCREEN_WIDTH = 600;

int main(){

    sf::CircleShape circle(50);

    physics::Body body(circle, 0);
    body.set_position(100, 100);
    body.set_x_velocity(1);
    body.set_y_velocity(1);

    physics::Body body2(circle, 0);
    body2.set_position(400, 400);
    body2.set_x_velocity(-1);
    body2.set_y_velocity(-1);
    body2.set_color(sf::Color::Green);

    physics::Body body3(circle, 0);
    body3.set_position(400, 100);
    body3.set_x_velocity(-1);
    body3.set_y_velocity(1);
    body3.set_color(sf::Color::Blue);
    
    physics::World world(SCREEN_HEIGHT, SCREEN_WIDTH);
    world.addBody(body);
    //world.addBody(body2);
    //world.addBody(body3);

    sf::RenderWindow window(sf::VideoMode(SCREEN_HEIGHT, SCREEN_WIDTH), "My window");

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
            window.draw(bodies[i].getShape());
        }
        

        window.display();
    }


    return 0;
}