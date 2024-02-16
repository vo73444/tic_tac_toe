#include "rules.hpp"
#include <string>

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

    if(row(1, 2, 3) != " "){
        return false;
    }
    else if(row(4, 5, 6) != " "){
        return false;
    }
    else if(row(7, 8, 9) != " "){
         return false;
    }
    else if(row(1, 4, 7) != " "){
         return false;
    }
    else if(row(2, 5, 8) != " "){
         return false;
    }
    else if(row(3, 6, 9) != " "){
         return false;
    }
    else if(row(1, 5, 9) != " "){
        return false;
    }
    else if(row(3, 5, 7) != " "){
        return false;
    }
    else {
        return true;
    }
}

string Rules::row(int cell1, int cell2, int cell3){
    if(board->get_mark(cell1) == board->get_mark(cell2) && board->get_mark(cell2) == board->get_mark(cell3) && board->get_mark(cell1) != " "){
        return board->get_mark(cell1);
    }
    else{
        return " ";
    }
}
