//
// Created by eduardo on 8/9/21.
//

#include "Block.h"

Block::Block(int type) {
    initType(type)
    initVisual();
}

void Block::initType(int type) {
    switch (type) {
        case 1:
            this->lives = 1;
            this->givenPoints = 10;
        case 2:
            this->lives = 2;
            this->givenPoints = 15;
        case 3:
            this->lives = 3;
            this->givenPoints = 20;
        case 4:
            this->lives = 1;
            this->givenPoints = 30;
        default:
            this->deep = true;
    }
}

void Block::initVisual() {
    this->setSize(sf::Vector2i(50.i, 50.i));
    switch (this->lives) {
        case 3:
            this->setFillColor(sf::Color::Red);
        case 2:
            this->setFillColor(sf::Color::Yellow);
        case 1:
            this->setFillColor(sf::Color::White);
    }
    this->setOutlineColor(sf::Color::Black);
}

void Block::getHit() {
    this->lives--;
}

void Block::getDestroyed() {
    if (this->lives == 0) {

    }
}

int Block::getPoints() {
    return this->givenPoints;
}

const bool Block::isDeep() const {
    return this->deep;
}