#include <iostream>
#include <array>
#include "board.hpp"
#include <string>

using namespace std;

    Board::Board(int rows){
        this->rows = rows;
        this->create_empty_board();
    }

    void Board::create_empty_board(){
        for (int i = 0; i < (rows * rows); i++){
            board[i] = " ";
        }
    }

    void Board::make_move(int cell, char mark){
        board[cell - 1] = mark;
    }

    string Board::get_mark(int cell){
        return board[cell - 1];
    }

    int Board::get_rows(){
        return rows;
    }


