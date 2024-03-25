#include <iostream>
#include "game.hpp"
#include "human_player.hpp"
#include "exit_menu.hpp"

using namespace std;

Game::Game(Board *board_ptr, Rules *rules_ptr, ConsoleBoardCreator *creator_ptr, Player *player1_ptr, Player *player2_ptr){
    board = board_ptr;
    rules = rules_ptr;
    creator = creator_ptr;
    player1 = player1_ptr;
    player2 = player2_ptr;
    current_player = player1;
}

void Game::restart(){
    board->create_empty_board();
    current_player = player1;
}

void Game::start(){
    // string user_input = "";
    char player = 'X';
    
    while(rules->in_progress()){
        cout << creator->formatted_board() << endl;
        // cout << "Select a cell(1-9): ";
        // cin >> user_input;

        // while(!(rules->validate_input(stoi(user_input)))){
        //     cout << creator->formatted_board();
        //     cout << "Invalid cell\n";
        //     cout << "Please enter another cell(1-9): ";
        //     cin >> user_input;
        // }

        // board->make_move(stoi(user_input), player);

        // if(player == 'X'){
        //   player = 'O';
        // }
        // else{
        //    player = 'X';
        // }

        current_player->move();
        switch_player();

        cout << endl;
    }

    if(rules->check_tie()){
        cout << creator->formatted_board();
        cout << "It's a tie... \n";

        return;
    }
    
    else{
        // if(current_player == player1){
        //     player = 'O';
        // }
        // else{
        //     player = 'X';
        // }

        // cout << creator->formatted_board();

        // cout << "Player " << player << " wins!!\n";

        switch_player();
        
        cout << creator->formatted_board();
        cout << "Player " << current_player->get_symbol() << " wins!!\n\n";
    }

    ExitMenu(this).execute();

}

void Game::switch_player(){
    if(current_player == player1){
        current_player = player2;
    }
    else{
        current_player = player1;
    }
}

