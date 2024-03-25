#include <array>
#include <string>

#ifndef BOARD
#define BOARD

class Board{
    
    std::array<std::string, 9> board;

    //std::string board[9];
 
    public:
    Board();

    void make_move(int cell, char mark);

    std::string get_mark(int cell);

    void create_empty_board();

};

#endif
