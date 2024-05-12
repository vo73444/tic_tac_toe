#include "console_board.hpp"
#include <iostream>

using namespace std;

    ConsoleBoardCreator::ConsoleBoardCreator(Board *inputted_board){
        board = inputted_board;
    }

    string ConsoleBoardCreator::formatted_board(){
        string output = "";

        for(int i = 1; i <= pow(board->get_rows(),2); i++){
            if(i == pow(board->get_rows(), 2)){
                output = output + " " + board->get_mark(i) + "\n\n";
            }

            else if(i%(board->get_rows()) == 0){
                if(board->get_rows() == 3){
                output = output + " " + board->get_mark(i) + "\n-----------\n";
                }
                else{
                    output = output + " " + board->get_mark(i) + "\n---------------\n";
                }
            }
            
            else{
                output = output + " " + board->get_mark(i) + " |";
            }

        }

        return output;

        // return " " + board->get_mark(1) + " | " + board->get_mark(2) +
        //  " | " + board->get_mark(3) + " \n-----------\n" + 
        //  " " + board->get_mark(4) + " | " + board->get_mark(5) + 
        //  " | " + board->get_mark(6) + " \n-----------\n" + 
        //  " " + board->get_mark(7) + " | " + board->get_mark(8) + 
        //  " | " + board->get_mark(9) + " \n\n";
    }
