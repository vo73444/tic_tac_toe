#include "board.hpp"
#ifndef CONSOLE_BOARD_CREATOR
#define CONSOLE_BOARD_CREATOR

class ConsoleBoardCreator{
    Board *board;

    public:
    ConsoleBoardCreator(Board *inputted_board);

    std::string formatted_board();
};

#endif
