#ifndef BLOCK_HPP
#define BLOCK_HPP

#include <iostream>
#include <SFML/Graphics.hpp>

class Block {
public:
	enum Blocks {
		EMPTY,
		BLOCK,
		DEATH,
	} type;
private:
	static std::vector<std::string> textures;

	sf::Sprite spr;
public:
	Block(int blockType, sf::Vector2f worldPos, int surroundings);
	sf::FloatRect getBounds() {
		return spr.getGlobalBounds();
	}
	void draw(sf::RenderTarget& window) {
		if(type!=EMPTY) {
			window.draw(spr);
		}
	}
};

#endif //BLOCK_HPP