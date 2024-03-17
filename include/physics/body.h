#ifndef BODY_H
#define BODY_H
#include <SFML/Graphics.hpp>

namespace physics {
    class Body{
    public:
        Body(sf::Shape* shape_, float mass_) {shape = shape_; mass = mass_;}

        sf::Shape* getShape() {return shape;}

        void set_position(float x, float y);

        void update_body(float timestep);
    private:
        sf::Shape* shape;
        float mass = 0;
        float x_acceleration = 0;
        float y_acceleration = 0;
        float x_velocity = 1;
        float y_velocity = 1;

    };
}

#endif
