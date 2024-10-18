#pragma once 

#include "sfml.h"

class Terrain {
public:
    Terrain(int type, const sf::Vector2f& position, const sf::Vector2f& size, const sf::Color& color);
    ~Terrain();

    void set_type(int type);
    int get_type() const;

    sf::RectangleShape shape; // This should be private and need to surchage draw for this class
private:
    int type; // Three types 0, 1 and 2 to define later
    sf::Color color;
    sf::Vector2f position;
    sf::Vector2f size;
};

