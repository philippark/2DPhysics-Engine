#ifndef BODY_H
#define BODY_H
#include <SFML/Graphics.hpp>

namespace physics {
    class Body{
    public:
        Body(sf::CircleShape shape_, float mass_) {shape = shape_; mass = mass_;}

        void set_position(float x, float y);
        void update_body(float timestep);

        sf::CircleShape getShape() {return shape;}
    private:
        sf::CircleShape shape;
        float mass = 0;
        float x_acceleration = 0;
        float y_acceleration = 0;
        float x_velocity = 1;
        float y_velocity = 1;

    };
}

#endif
