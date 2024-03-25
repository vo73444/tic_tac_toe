#include "board.hpp"
#include "rules.hpp"
#include "console_board.hpp"
#include "player.hpp"

#ifndef GAME
#define GAME

class Game{

    Board *board;
    Rules *rules;
    ConsoleBoardCreator *creator;
    Player *player1;
    Player *player2;
    Player *current_player;
    
    void switch_player();

    public:
        Game(Board *board_ptr, Rules *rules_ptr, ConsoleBoardCreator *creator_ptr,
        Player *player1_ptr, Player *player2_ptr);

        void start();
        void restart();
};

#endif


