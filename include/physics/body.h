#ifndef BODY_H
#define BODY_H
#include <SFML/Graphics.hpp>

namespace physics { 
    class Body : public sf::CircleShape {
        public:
        Body(float radius, float mass_) {this->setRadius(radius); mass = mass_;}
        void set_x_velocity(int x_velocity_) {x_velocity = x_velocity_;}
        void set_y_velocity(int y_velocity_) {y_velocity = y_velocity_;}

        float get_x_velocity() {return x_velocity;}
        float get_y_velocity() {return y_velocity;}

        private:
        float mass = 1;
        float x_acceleration = 0;
        float y_acceleration = 0;
        float x_velocity = 0;
        float y_velocity = 0;
    };
}

#endif
