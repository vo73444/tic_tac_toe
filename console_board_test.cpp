#include <iostream>
#include "console_board.hpp"
#include <string>

using namespace std;

int main(){

    Board board = Board(4);
    board.make_move(3, 'X');
    Board *board_ptr = &board;

    ConsoleBoardCreator creator = ConsoleBoardCreator(board_ptr);

    string test_board = creator.formatted_board();

    cout << test_board;


    return 0;
}
