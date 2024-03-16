#ifndef BODY_H
#define BODY_H
#include <SFML/Graphics.hpp>

namespace physics {
    class Body{
    public:
        Body(sf::Shape* shape_, float mass_) {shape = shape_; mass = mass_;}

        sf::Shape* getShape() {return shape;}
    private:
        sf::Shape* shape;
        float mass;

    };
}

#endif
