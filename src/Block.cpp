#include "Block.hpp"
#include "ResourceManager.hpp"

std::vector<std::string> Block::textures={
    "",
    "",
    "",
};

Block::Block(int blockType, sf::Vector2f worldPos, int surroundings) {
    spr.setPosition(worldPos);
    if(blockType>=BLOCK) {
        //block
        spr.setTexture(ResourceManager::getTexture(textures[blockType]));
    }
}