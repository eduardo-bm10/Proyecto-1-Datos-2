//
// Created by eduardo on 13/9/21.
//

#include "DoubleBlockFactory.h"

using namespace sf;

/**
 * Method createBlock creates a rectangle and sets the attributes for a double block
 * @author Eduardo Bolivar
 * @return block
 */
Block DoubleBlockFactory::createBlock() {
    Block block;
    block.getRect()->setSize(Vector2f(40.f, 10.f))
    block.getRect()->setFillColor(Color::Blue);
    block.setDeep(false);
    block.setLives(2);
    block.setPoints(15);
    return block;
}