#include "board.hpp"
#include "rules.hpp"
#include "console_board.hpp"

#ifndef GAME
#define GAME

class Game{

    Board *board;
    Rules *rules;
    ConsoleBoardCreator *creator;

    public:
        Game(Board *board_ptr, Rules *rules_ptr, ConsoleBoardCreator *creator_ptr);

        void start();
};

#endif


