#include <iostream>
#include "game.hpp"
#include "human_player.hpp"
#include "computer_player.hpp"
#include "menu.hpp"

using namespace std;

int main(){

    Menu menu = Menu();

    Board board = Board(menu.get_option2());
    ConsoleBoardCreator creator = ConsoleBoardCreator(&board);
    Rules rules = Rules(&board);



    HumanPlayer player1 = HumanPlayer(&board, &rules, 'X');

    if(menu.get_option() == 1){
        HumanPlayer player2 = HumanPlayer(&board, &rules, 'O');

        Game game = Game(&board, &rules, &creator, &player1, &player2);
        cout << endl;

        game.start(); 

    }
    else{
        ComputerPlayer player2 = ComputerPlayer(&board, 'O');
        Game game = Game(&board, &rules, &creator, &player1, &player2);

        cout << endl;

        game.start();

    }
    
    return 0;

}

// g++ -std=c++11 board.cpp console_board.cpp game.cpp human_player.cpp main.cpp rules.cpp computer_player.cpp menu.cpp
