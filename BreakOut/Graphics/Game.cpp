//
// Created by eduardo on 4/9/21.
//

#include "Game.h"
#include "GameEngine.h"

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
    ///Game logic coding
    window.display();
}

