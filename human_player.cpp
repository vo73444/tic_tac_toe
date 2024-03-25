#include <iostream>
#include "human_player.hpp"
#include <string>

using namespace std;

HumanPlayer::HumanPlayer(Board *inputted_board, Rules *rules_ptr, char symbol){
    board = inputted_board;
    rules = rules_ptr;
    this->symbol = symbol;
}

void HumanPlayer::move(){
    string user_input = "";
    // std::cout << "\n" << creator->formatted_board();
        cout << "Select a cell(1-9): ";
        cin >> user_input;

        while(!(rules->validate_input(stoi(user_input)))){
            // std::cout << creator->formatted_board();
            cout << "Invalid cell\n";
            cout << "Please enter another cell(1-9): ";
            cin >> user_input;
        }

        board->make_move(stoi(user_input), symbol);
}

char HumanPlayer::get_symbol(){
    return symbol;
}

