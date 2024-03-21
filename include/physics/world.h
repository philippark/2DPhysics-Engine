#ifndef WORLD_H
#define WORLD_H
#include <vector>
#include <SFML/Graphics.hpp>
#include "body.h"
#include "collision.h"

namespace physics {
    class World{
    public:
        void addBody(physics::Body body) {bodies.push_back(body);}
        std::vector<physics::Body> get_bodies(){return bodies;}
        void step(float time_step);

        void update_world(float timestep);

    private:
        std::vector<physics::Body> bodies;
        
    };
}

#endif