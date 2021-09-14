//
// Created by eduardo on 13/9/21.
//

#ifndef BREAKOUT_DEEPBLOCKFACTORY_H
#define BREAKOUT_DEEPBLOCKFACTORY_H

#include "BlockFactory.h"

class DeepBlockFactory:public BlockFactory {
public:
    Block createBlock() override;
};


#endif //BREAKOUT_DEEPBLOCKFACTORY_H
