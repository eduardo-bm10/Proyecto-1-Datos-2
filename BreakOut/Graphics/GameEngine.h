//
// Created by eduardo on 9/9/21.
//

#ifndef BREAKOUT_GAMEENGINE_H
#define BREAKOUT_GAMEENGINE_H

#include <SFML/Graphics.hpp>
#include "SFML/System.hpp"
#include "SFML/Window.hpp"
#include "SFML/Audio.hpp"

/**
 * GameEngine Class: runs and update the game.
 * @author Eduardo Bolivar Minguet
 */
class GameEngine {
private:
    sf::RenderWindow* window;
    void initWindow();
    void initVars();
public:
    ///Constructors and deconstructor
    GameEngine();
    virtual ~GameEngine();

    ///Functionality
    void update();
    void render();
};


#endif //BREAKOUT_GAMEENGINE_H
