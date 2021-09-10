//
// Created by eduardo on 4/9/21.
//

#ifndef BREAKOUT_GAME_H
#define BREAKOUT_GAME_H


class Game {
public:
    bool isActive;
    bool* activePtr = &isActive;
    void start();
};


#endif //BREAKOUT_GAME_H
