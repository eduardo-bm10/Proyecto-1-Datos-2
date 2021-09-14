//
// Created by eduardo on 13/9/21.
//

#ifndef BREAKOUT_BLOCKFACTORY_H
#define BREAKOUT_BLOCKFACTORY_H

#include "/home/eduardo/Documentos/GitHub/Proyecto-1-Datos-2/BreakOut/Objects/Block.h"

/**
 * Class BlockFactory provides a single method that is used to create all types of required blocks.
 * @author Eduardo Bolivar
 */
class BlockFactory {
protected:
    virtual Block createBlock();
};


#endif //BREAKOUT_BLOCKFACTORY_H
