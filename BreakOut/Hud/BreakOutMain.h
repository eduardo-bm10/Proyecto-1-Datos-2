//
// Created by eduardo on 4/9/21.
//

#ifndef BREAKOUT_BREAKOUTMAIN_H
#define BREAKOUT_BREAKOUTMAIN_H
#include <SFML/Window.hpp>

class BreakOutMain {
    sf::Window window;
    bool isActive;
public:
    Game start();
};


#endif //BREAKOUT_BREAKOUTMAIN_H
