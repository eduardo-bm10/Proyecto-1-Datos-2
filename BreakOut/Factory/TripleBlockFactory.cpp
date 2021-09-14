//
// Created by eduardo on 13/9/21.
//

#include "TripleBlockFactory.h"

using namespace sf;

Block TripleBlockFactory::createBlock() {
    Block block;
    block.getRect()->setSize(Vector2f(40.f, 10.f))
    block.getRect()->setFillColor(Color::Red);
    block.setDeep(false);
    block.setLives(3);
    block.setPoints(20);
    return block;
}