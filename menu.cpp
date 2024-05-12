#include "menu.hpp"
#include <iostream>

using namespace std;

Menu::Menu(){
    string user_input;
    string user_input2;

    cout << "\nWelcome to Tic-Tac-Toe!!!\n"
    << "\nPlease choose a game mode\n\n"
    << "(1) Human vs. Human"
    << "\n(2) Human vs. Computer\n\n";

    cin >> user_input;
    while(user_input != "1" && user_input != "2"){
        cout << "\nNot a valid choice.\n"
        << "\nPlease choose a game mode\n\n"
        << "(1) Human vs. Human"
        << "\n(2) Human vs. Computer\n\n";
        cin >> user_input;
    }

    option = stoi(user_input);

    cout << "\nPlease choose a game board size\n\n"
    << "(3) 3X3 board\n"
    << "(4) 4X4 board\n\n";
    cin >> user_input2;

    while(user_input2 != "3" && user_input2 != "4"){
        cout << "\nNot a valid choice.\n";
        cout << "\nPlease choose a game board size\n\n"
        << "(3) 3X3 board\n"
        << "(4) 4X4 board\n\n";
        cin >> user_input2;
    }

    option2 = stoi(user_input2);

}

int Menu::get_option(){
    return option;
}

int Menu::get_option2(){
    return option2;
}
