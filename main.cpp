#include <iostream>
#include "game.hpp"
#include "human_player.hpp"

using namespace std;

int main(){

    Board board;
    Board *board_ptr = &board;

    ConsoleBoardCreator creator = ConsoleBoardCreator(board_ptr);
    ConsoleBoardCreator *creator_ptr = &creator;

    Rules rules = Rules(board_ptr);
    Rules *rules_ptr = &rules;

    HumanPlayer player1 = HumanPlayer(board_ptr, rules_ptr, 'X');
    HumanPlayer player2 = HumanPlayer(board_ptr, rules_ptr, 'O');
    

    Game game = Game(board_ptr, rules_ptr, creator_ptr, &player1, &player2);

    cout << endl;

    game.start();

    return 0;

}

// g++ -std=c++11 board.cpp console_board.cpp game.cpp human_player.cpp main.cpp rules.cpp exit_menu.cpp
