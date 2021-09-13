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
        switch (this->event.type) {
            case sf::Event::Closed:
                this.window->close();
                break;
            case sf::Event::KeyPressed:
                if (this->event.key == sf::Keyboard::Right) {

                }
                else if (this->event.key == sf::Keyboard::Left) {

                }

        }
    }
}

void Game::render() {
    this->window->clear(sf::Color::White);

    this->window->display();
}

const bool Game::isRunning() const {
    return this->window->isOpen();
}