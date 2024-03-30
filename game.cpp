#include <iostream>
#include "game.hpp"
#include "human_player.hpp"
// #include "exit_menu.hpp"

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

        bool replay = true;
        string user_input;

    while(replay){

        while(rules->in_progress()){

            cout << creator->formatted_board() << endl;
            current_player->move();
            switch_player();

            cout << endl;
            
        }

        if(rules->check_winner()){
            switch_player();
        
            cout << creator->formatted_board();
            cout << "Player " << current_player->get_symbol() << " wins!!\n\n";

        }
            
        else{
            cout << creator->formatted_board();
            cout << "It's a tie... \n\n";

        }

        cout << "Enter '1' to play again, otherwise any other key to exit...\n";
        cin >>user_input;

        if(user_input != "1"){
            cout <<"\nThanks for playing!!!\n";
            replay = false;
        }

        else{

            restart();
        }
            
    }

    // ExitMenu(this).execute();

}

void Game::switch_player(){
    if(current_player == player1){
        current_player = player2;
    }
    else{
        current_player = player1;
    }
}

