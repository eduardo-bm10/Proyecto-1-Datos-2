//
// Created by eduardo on 13/9/21.
//

#include "DoubleBlockFactory.h"

using namespace sf;

Block DoubleBlockFactory::createBlock() {
    Block block;
    block.getRect()->setSize(Vector2f(40.f, 10.f))
    block.getRect()->setFillColor(Color::Blue);
    block.setDeep(false);
    block.setLives(2);
    block.setPoints(15);
    return block;
}