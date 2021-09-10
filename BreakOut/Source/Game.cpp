//
// Created by eduardo on 4/9/21.
//

#include "Game.h"

/**
 * Constructor Game: initializes the pointer and the window
 * @author Eduardo Bolivar
 */
Game::Game() {
    initVariables();
    initWindow();
}

Game::~Game() {
    delete this->window;
}

void Game::initWindow() {
    this->videoMode.height = 600;
    this->videoMode.width = 800;
    this->window = new sf::RenderWindow(this->videoMode, "Breakout", sf::Style::Titlebar | sf::Style::Close);

}

void Game::initVariables() {
    this->window = nullptr;
}

void Game::update() {
    while (this->window->pollEvent(this->event)) {
        if (this->event.type == sf::Event::Closed) {
            this.window->close();
            break;
        }
    }
}

void Game::render() {
    this->window->clear(sf::Color::White);
}

const bool Game::isRunning() const {
    return this->window->isOpen();
}