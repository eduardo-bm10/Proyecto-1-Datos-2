//
// Created by eduardo on 13/9/21.
//

#include "InnerBlockFactory.h"

using namespace sf;

Block InnerBlockFactory::createBlock() {
    Block block;
    block.getRect()->setSize(Vector2f(40.f, 10.f))
    block.getRect()->setFillColor(Color::Yellow);
    block.setDeep(false);
    block.setLives(1);
    block.setPoints(30);
    return block;
}