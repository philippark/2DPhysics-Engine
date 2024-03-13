#ifndef BODY_H
#define BODY_H
#include <SFML/Graphics.hpp>

class Body{
public:
    Body(sf::Shape);

    const sf::Shape& getShape() const {return shape;};

private:
    sf::Shape shape;

    float x_acceleration;
    float y_acceleration;
    float x_velocity;
    float y_velocity;

    //float mass;
};
#endif