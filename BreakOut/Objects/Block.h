//
// Created by eduardo on 8/9/21.
//

#ifndef BREAKOUT_BLOCK_H
#define BREAKOUT_BLOCK_H

#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/Audio.hpp"
#include "SFML/System.hpp"
#include "SFML/Network.hpp"

/**
 * Class Block creates objects for the blocks that need to be destroyed.
 * Provides an array of block objects, and a constructor to define shapes and color of blocks.
 */
class Block : public sf::RectangleShape {
private:
    int type;
    int lives;
    bool deep;
public:
    Block(int type);
    void getHit();
    bool isAlive();
    void getDestroyed();

}


#endif //BREAKOUT_BLOCK_H
