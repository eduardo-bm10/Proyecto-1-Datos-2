//
// Created by eduardo on 8/9/21.
//

#include "Block.h"

Block::Block() {
    this->deep = false;
    initPtr();
    initType(type)
    initVisual();
}

void Block::initPtr() {
    this->rectangle = new sf::RectangleShape();
}

void Block::getHit() {
    this->lives--;
}

void Block::getDestroyed() {
    if (this->lives == 0) {
        delete this->rectangle;
        delete this;
    }
}

int Block::getLives() {
    return this->lives;
}

void Block::setLives(int lives) {
    this->lives = lives;
}

int Block::getPoints() {
    return this->givenPoints;
}

void Block::setPoints(int points) {
    this->givenPoints = points;
}

const bool Block::isDeep() const {
    return this->deep;
}

void Block::setDeep(bool deep) {
    this->deep = deep;
}

sf::RectangleShape* Block::getRect() {
    return this->rectangle;
}