#include "menu.hpp"
#include <iostream>

using namespace std;

Menu::Menu(){
    string user_input;

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
}

int Menu::get_option(){
    return option;
}
