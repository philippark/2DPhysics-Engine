#ifndef BODY_H
#define BODY_H
#include <SFML/Graphics.hpp>

namespace physics {

    class Circle{
    public:
        Circle(float radius_);
    private:
        sf::CircleShape shape;
        float radius;
    };

    class Rectangle{
    public:
        Rectangle(float width_, float height_);
    private:
        sf::RectangleShape shape;
        float width;
        float height;
    }
}

#endif
