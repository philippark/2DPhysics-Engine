#ifndef WORLD_H
#define WORLD_H
#include <vector>
#include <SFML/Graphics.hpp>

namespace physics {
    class World{
    public:
        World();

    private:
        std::vector<sf::Shape*> bodies;
        
    };
}

#endif