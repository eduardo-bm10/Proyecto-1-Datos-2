//
// Created by eduardo on 13/9/21.
//

#ifndef BREAKOUT_INNERBLOCKFACTORY_H
#define BREAKOUT_INNERBLOCKFACTORY_H

#include "BlockFactory.h"

class InnerBlockFactory:public BlockFactory {
public:
    Block createBlock() override;
};


#endif //BREAKOUT_INNERBLOCKFACTORY_H
