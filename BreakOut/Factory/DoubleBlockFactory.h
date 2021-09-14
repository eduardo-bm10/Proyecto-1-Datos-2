//
// Created by eduardo on 13/9/21.
//

#ifndef BREAKOUT_DOUBLEBLOCKFACTORY_H
#define BREAKOUT_DOUBLEBLOCKFACTORY_H

#include "BlockFactory.h"

/**
 * Class DoubleBlockFactory uses the method to create a double block
 * @extends BlockFactory
 * @author Eduardo Bolivar
 */
class DoubleBlockFactory:public BlockFactory {
public:
    Block createBlock() override;
};


#endif //BREAKOUT_DOUBLEBLOCKFACTORY_H
