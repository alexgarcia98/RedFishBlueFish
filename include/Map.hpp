#ifndef MAP_HPP
#define MAP_HPP

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Block.hpp"

class Map {
	std::vector<Block> blocks;
	sf::Vector2u size;
	std::size_t transvape(sf::Vector2i pos) const {
		return pos.y*size.x+pos.x;
	}
public:
	Map(sf::Vector2u size):size(size) {
		blocks.reserve(size.x*size.y);
	}
	const Block& operator[](sf::Vector2i pos) const {
		return blocks[transvape(pos)];
	}
	Block& operator[](sf::Vector2i pos) {
		return blocks[transvape(pos)];
	}
	sf::Vector2u getSize() const {
		return size;
	}
};

#endif //MAP_HPP