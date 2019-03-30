#ifndef BLOCK_HPP
#define BLOCK_HPP

#include <iostream>
#include <SFML/Graphics.hpp>

class Block {
public:
	enum Blocks {
		EMPTY,
		BLOCK
	} type;
private:
	sf::Sprite spr;
public:
	Block(Block::Blocks blockType, sf::Vector2f worldPos, int surroundings);
	void draw(sf::RenderTarget& window) {
		if(type!=EMPTY) {
			window.draw(spr);
		}
	}
};

#endif //BLOCK_HPP