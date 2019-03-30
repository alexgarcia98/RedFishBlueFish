#include <iostream>
#include <SFML/Graphics.hpp>
#include "Block.hpp"

class Map {
public:
	const Block& operator[](sf::Vector2i pos);
	Block& operator[](sf::Vector2i pos);

public:

}
