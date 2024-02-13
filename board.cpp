#include <iostream>
//#include <cassert>
#include <array>
#include "board.hpp"

using namespace std;

class Board{
    array<string, 9> board;

    public:
    Board(){
        for (int = 0; i < 9; i++){
            board[i] = ' ';
        }
    }

    void make_move(int cell, char mark){
        board[cell - 1] = mark;
    }

    string get_mark(int cell){
        return board[cell - 1];
    }

};
