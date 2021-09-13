#include "Source/Game.h"

/**
 * Method main runs the C++ program.
 * Creates an instante of game and keeps running it.
 * @return 0
 */
int main() {
    ///Init Game object
    Game game;
    ///Game loop
    while (game.isRunning()) {
        /// Update in-game stuff
        game.update();
        ///Show updates on screen
        game.render();
    }
    return 0;
}
