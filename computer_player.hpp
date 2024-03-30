#pragma once
#include "board.hpp"
#include "player.hpp"

class ComputerPlayer : public Player{
    Board *board;
    char symbol;

    public:
    ComputerPlayer(Board *inputted_board, char symbol);
    void move() override;
    char get_symbol() override;
};
