//
// Created by eduardo on 4/9/21.
//

#include "Game.h"
#include <SFML/Graphics.hpp>
#include "SFML/System.hpp"
#include "SFML/Window.hpp"
#include "SFML/Audio.hpp"

void Game::start() {
    this->isActive = true;
    sf::RenderWindow window(sf::VideoMode(800, 600), "BreakOut");

    while (isActive) {
        window.display();
        if () {
            close();
        }
    }
}

void Game::close() {
    this->isActive = false;
}