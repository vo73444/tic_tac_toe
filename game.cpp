#include <iostream>
#include "game.hpp"

using namespace std;

Game::Game(Board *board_ptr, Rules *rules_ptr, ConsoleBoardCreator *creator_ptr){
    board = board_ptr;
    rules = rules_ptr;
    creator = creator_ptr;
}

void Game::start(){
    string user_input = "";
    char player = 'X';
    
    while(rules->in_progress()){
        cout << "\n" << creator->formatted_board();
        cout << "Select a cell: ";
        cin >> user_input;

        while(!(rules->validate_input(stoi(user_input)))){
            cout << "Invalid cell\n";
            cout << "Please enter another cell: ";
            cin >> user_input;
        }

        board->make_move(stoi(user_input), player);

        if(player == 'X'){
          player = 'O';
        }
        else{
           player = 'X';
        }
    }

    if(player == 'X'){
        player = 'O';
    }
    else{
        player = 'X';
    }

    cout << creator->formatted_board();

    cout << "Player " << player << " wins!!\n";
}

