#include "Block.hpp"

Block::Block(Block::Blocks blockType, sf::Vector2f worldPos, int surroundings) {
    spr.setPosition(worldPos);
    switch(blockType) {
        case EMPTY:
            break;
        case BLOCK:
            {
                
            }
            break;
    }
}