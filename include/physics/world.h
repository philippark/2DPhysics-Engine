#ifndef WORLD_H
#define WORLD_H
#include <vector>
#include <SFML/Graphics.hpp>
#include "body.h"

namespace physics {
    class World{
    public:
        void addBody(physics::Body body) {bodies.push_back(body);}

        void step(float time_step);
    private:
        std::vector<physics::Body> bodies;
        
    };
}

#endif