//
// Created by eduardo on 13/9/21.
//

#include "CommonBlockFactory.h"

using namespace sf;

/**
 * Method createBlock creates a rectangle and sets the attributes for a common block.
 * @author Eduardo Bolivar
 * @return block
 */
Block CommonBlockFactory::createBlock() {
    Block block;
    block.getRect()->setSize(Vector2f(40.f, 10.f))
    block.getRect()->setFillColor(Color::Cyan);
    block.setDeep(false);
    block.setLives(1);
    block.setPoints(10);
    return block;
}