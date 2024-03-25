#pragma once

#include "game.hpp"

class ExitMenu{
    Game *game;

    public:
    ExitMenu(Game *game);
    void execute();
};
