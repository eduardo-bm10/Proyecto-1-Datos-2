//
// Created by eduardo on 13/9/21.
//

#include "DeepBlockFactory.h"

using namespace sf;

Block DeepBlockFactory::createBlock() {
    Block block;
    block.getRect()->setSize(Vector2f(40.f, 10.f))
    block.getRect()->setFillColor(Color::White);
    block.setDeep(true);
    block.setLives(10);
    block.setPoints(0);
    return block;
}