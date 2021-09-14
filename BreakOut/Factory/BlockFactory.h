//
// Created by eduardo on 13/9/21.
//

#ifndef BREAKOUT_BLOCKFACTORY_H
#define BREAKOUT_BLOCKFACTORY_H

#include "/home/eduardo/Documentos/GitHub/Proyecto-1-Datos-2/BreakOut/Objects/Block.h"

class BlockFactory {
protected:
    virtual Block createBlock();
};


#endif //BREAKOUT_BLOCKFACTORY_H
