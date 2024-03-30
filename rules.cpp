#include "rules.hpp"
#include <string>
#include <iostream>

using namespace std;

Rules::Rules(Board *inputted_board){
    board = inputted_board;
}


bool Rules::validate_input(int input){
    string current_mark = board->get_mark(input);
    if(input < 1 || input > 9 || current_mark != " "){
        return false;
    }
        return true;
}

bool Rules::in_progress(){
    if(check_tie()){
        return false;
    }

    else if(check_winner()){
        return false;
    }


        return true;
}

string Rules::row(int cell1, int cell2, int cell3){
    if(board->get_mark(cell1) == board->get_mark(cell2) && board->get_mark(cell2) == board->get_mark(cell3) && board->get_mark(cell1) != " "){
        return board->get_mark(cell1);
    }
    else{
        return " ";
    }
}

bool Rules::check_winner(){
    if(row(1, 2, 3) != " "){
        return true;
    }
    else if(row(4, 5, 6) != " "){
        return true;
    }
    else if(row(7, 8, 9) != " "){
         return true;
    }
    else if(row(1, 4, 7) != " "){
         return true;
    }
    else if(row(2, 5, 8) != " "){
         return true;
    }
    else if(row(3, 6, 9) != " "){
         return true;
    }
    else if(row(1, 5, 9) != " "){
        return true;
    }
    else if(row(3, 5, 7) != " "){
        return true;
    }

    return false;

}

bool Rules::check_tie(){
    for(int i = 1; i <= 9; i++){
        if(board->get_mark(i) == " "){
            return false;
        }
    }

    return true;
}

