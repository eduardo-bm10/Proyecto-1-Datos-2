//
// Created by eduardo on 4/9/21.
//

#ifndef BREAKOUT_GAME_H
#define BREAKOUT_GAME_H

#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/Audio.hpp"
#include "SFML/System.hpp"
#include "SFML/Network.hpp"

/**
 * Game: main class of the game engine.
 * Provides the main window and the main methods of the visuals.
 * @author Eduardo Bolivar
 */
class Game {
private:
    sf::RenderWindow* window;
    sf::Event event;
    sf::VideoMode videoMode;

    void initVariables();
    void initWindow();
public:
    Game();
    ~Game();
    const bool isRunning() const;
    void update();
    void render();
};


#endif //BREAKOUT_GAME_H
