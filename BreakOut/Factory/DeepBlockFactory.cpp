//
// Created by eduardo on 13/9/21.
//

#include "DeepBlockFactory.h"

using namespace sf;

/**
 * Method createBlock creates a rectangle and sets the attributes for a deep block
 * @author Eduardo Bolivar
 * @return block
 */
Block DeepBlockFactory::createBlock() {
    Block block;
    block.getRect()->setSize(Vector2f(40.f, 10.f))
    block.getRect()->setFillColor(Color::White);
    block.setDeep(true);
    block.setLives(10);
    block.setPoints(0);
    return block;
}