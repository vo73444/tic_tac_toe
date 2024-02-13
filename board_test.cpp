#include <iostream>
#include <cassert>
#include <array>
#include "board.hpp"

using namespace std;

int main(){

    Board board;

    board.make_move(3, 'X');

    Board *board_ptr = &board;

    cout << "Starting test ... \n";

    assert(board.get_mark(3) == "X");

    cout << "Test Succeded!\n";

    return 0;
}
