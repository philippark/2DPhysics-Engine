#ifndef WORLD_H
#define WORLD_H
#include <vector>
#include <SFML/Graphics.hpp>
#include "body.h"
#include "collision.h"

namespace physics {
    class World{
    public:
        World(float screen_width_, float screen_height_) {screen_width = screen_width_; screen_height = screen_height_; }
        void addBody(physics::Body body) {bodies.push_back(body);}
        std::vector<physics::Body> get_bodies(){return bodies;}
        void step(float time_step);

        void update_world(float timestep);

    private:
        float screen_height;
        float screen_width;
        std::vector<physics::Body> bodies;
        
    };
}

#endif