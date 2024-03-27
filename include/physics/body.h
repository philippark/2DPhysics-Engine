#ifndef BODY_H
#define BODY_H
#include <SFML/Graphics.hpp>

namespace physics {
    class Body{
    public:
        Body(sf::CircleShape shape_, float mass_) {shape = shape_; mass = mass_;}

        void move(float timestep);

        void set_position(float x, float y);
        void set_x_velocity(int x_velocity_) {x_velocity = x_velocity_;}
        void set_y_velocity(int y_velocity_) {y_velocity = y_velocity_;}

        void set_color(sf::Color color) {shape.setFillColor(color);}

        int get_x_velocity() {return x_velocity;}
        int get_y_velocity() {return y_velocity;}
        sf::Vector2f get_position() {return shape.getPosition();}

        sf::CircleShape& getShape() {return shape;}
    private:
        sf::CircleShape shape;
        float mass = 0;
        float x_acceleration = 0;
        float y_acceleration = 0;
        float x_velocity = 0;
        float y_velocity = 0;

    };
}

#endif
