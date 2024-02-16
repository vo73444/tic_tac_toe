#include "board.hpp"

#ifndef RULES
#define RULES

class Rules{
    Board *board;

    public:
    Rules(Board *inputted_board);

    bool validate_input(int input);

    bool in_progress();

    std::string row(int cell1, int cell2, int cell3);

};

#endif
