//
// Created by eduardo on 8/9/21.
//

#include "Block.h"

void Block::generator() {
    while (this->generate) {
        while (this->max < 200) {
            Block block = new Block();
            this->max++;
        }
    }
}