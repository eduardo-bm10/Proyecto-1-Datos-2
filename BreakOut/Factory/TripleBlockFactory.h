//
// Created by eduardo on 13/9/21.
//

#ifndef BREAKOUT_TRIPLEBLOCKFACTORY_H
#define BREAKOUT_TRIPLEBLOCKFACTORY_H

#include "BlockFactory.h"

class TripleBlockFactory:public BlockFactory {
public:
    Block createBlock() override;
};


#endif //BREAKOUT_TRIPLEBLOCKFACTORY_H
