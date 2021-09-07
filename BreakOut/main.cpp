#include "Hud/Game.h"

int main() {
    Game game = new Game();
    game.start();
    while (game.isActive) {
        if (not game.isActive) {
            break;
        }
    }
    return 0;
}
