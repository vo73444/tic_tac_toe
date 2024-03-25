#include "board.hpp"
#include "rules.hpp"
#include "player.hpp"

class HumanPlayer : public Player
{
    Board *board;
    Rules *rules;
    char symbol;

    public:
    HumanPlayer(Board *inputted_board, Rules *rules_ptr, char symbol);
    void move() override;
    
    char get_symbol() override;

};
