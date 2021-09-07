//
// Created by eduardo on 4/9/21.
//

#include "Game.h"
#include <SFML/Graphics.hpp>
#include "SFML/System.hpp"
#include "SFML/Window.hpp"
#include "SFML/Audio.hpp"

using namespace sf;

void Game::start() {
    RenderWindow window(VideoMode(800, 600), "BreakOut", Style::Titlebar | Style::Close);
    Event event;
    ///Game loop
    while (window.isOpen()) {
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
                break;
            }
        }
    }
    window.clear();
    window.display();
}

