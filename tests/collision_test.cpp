#include <iostream>
#include "../include/physics/world.h"
#include "../include/physics/collision.h"
#include <SFML/Graphics.hpp>

int main(){

    sf::CircleShape circle(50);

    physics::Body body(circle, 0);
    body.set_x_velocity(1);
    body.set_y_velocity(1);

    circle.move(300, 300);
    physics::Body body2(circle, 0);
    body2.set_x_velocity(-1);
    body2.set_y_velocity(-1);
    body2.set_color(sf::Color::Green);
    
    physics::World world;
    world.addBody(body);
    world.addBody(body2);

    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    float timestep = 0.1;

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