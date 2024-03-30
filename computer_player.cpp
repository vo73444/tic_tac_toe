#include "computer_player.hpp"
#include <iostream>
#include <ctime>

ComputerPlayer::ComputerPlayer(Board *inputted_board, char symbol){
    this->board = inputted_board;
    this->symbol = symbol;
}

void ComputerPlayer::move(){
    int random_num;
    srand(time(0));
    bool running = true;

    while(running){

        random_num = (rand() % 9) + 1;

        if(board->get_mark(random_num) == " "){
            board->make_move(random_num, symbol);
            running = false;
            break;
        }
    }
}

char ComputerPlayer::get_symbol(){
    return symbol;
}
