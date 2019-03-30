#include <iostream>
#include <SFML/Graphics.hpp>

class Block {
	sf::Sprite spr;
public:
	Block(int blockType, sf::Vector2f worldPos) {

	}
	int x;
	int getX() const {
		return x;
	}
	void setX(int x) {
		this->x=x;
	}
};



