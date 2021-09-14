//
// Created by eduardo on 13/9/21.
//

#ifndef BREAKOUT_INNERBLOCKFACTORY_H
#define BREAKOUT_INNERBLOCKFACTORY_H

#include "BlockFactory.h"

/**
 * Class InnerBlockFactory uses the method to create a inner block
 * @extends BlockFactory
 * @author Eduardo Bolivar
 */
class InnerBlockFactory:public BlockFactory {
public:
    Block createBlock() override;
};


#endif //BREAKOUT_INNERBLOCKFACTORY_H
