#include "Source/Game.h"

int main() {
    ///Init Game object
    Game game = new Game();
    ///Game loop
    while (game.isRunning()) {
        /// Update in-game stuff
        game.update();
        ///Show updates on screen
        game.render();
    }
    return 0;
}
