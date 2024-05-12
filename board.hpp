#include <vector>
#include <string>
#include <array>

#ifndef BOARD
#define BOARD

class Board{

    int rows;
    
    std::array<std::string, 16> board;

    //std::string board[9];
 
    public:
    Board(int rows);

    void make_move(int cell, char mark);

    std::string get_mark(int cell);

    void create_empty_board();

    int get_rows();

};

#endif
