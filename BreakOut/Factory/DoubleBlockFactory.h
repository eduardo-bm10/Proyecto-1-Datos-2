//
// Created by eduardo on 13/9/21.
//

#ifndef BREAKOUT_DOUBLEBLOCKFACTORY_H
#define BREAKOUT_DOUBLEBLOCKFACTORY_H

#include "BlockFactory.h"

class DoubleBlockFactory:public BlockFactory {
public:
    Block createBlock() override;
};


#endif //BREAKOUT_DOUBLEBLOCKFACTORY_H
