#include "board.hpp"

class ConsoleBoardCreator{
    Board *board;

    public:
    ConsoleBoardCreator(Board *inputted_board);

    std::string formatted_board();
};
