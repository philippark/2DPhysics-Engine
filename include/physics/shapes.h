//various shape definitions
#ifndef SHAPES_H
#define SHAPES_H

namespace physics {

    class Shape;

    enum class ShapeType{
        Circle,
        Rectangle
    };

    class Shape{
        virtual ~Shape(){};
        virtual ShapeType getType() const = 0;
    };

    class Circle : public Shape{
        ShapeType getType() const override {return ShapeType::Circle;}
    };
}

#endif
