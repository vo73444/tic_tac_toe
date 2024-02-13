#include <iostream>
//#include <cassert>
#include <array>
#include "console_board.hpp"

using namespace std;

int main(){

    Board board;
    board.make_move(3, 'X');
    Board *board_ptr = &board;

    ConsoleBoardCreator creator = ConsoleBoardCreator(board_ptr);

    string test_board = creator.formatted_board();

    cout << test_board;

    /*cout << "Starting test ... \n";

    cout << "Test Succeded!\n";*/

    return 0;
}
