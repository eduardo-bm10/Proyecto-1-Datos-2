//
// Created by eduardo on 13/9/21.
//

#ifndef BREAKOUT_COMMONBLOCKFACTORY_H
#define BREAKOUT_COMMONBLOCKFACTORY_H

#include "BlockFactory.h"

/**
 * Class CommonBlockFactory uses the method to create a common block.
 * @extends BlockFactory
 * @author Eduardo Bolivar
 */
class CommonBlockFactory:public BlockFactory {
public:
    Block createBlock() override;
};


#endif //BREAKOUT_COMMONBLOCKFACTORY_H
