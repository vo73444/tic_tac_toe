#include <iostream>
#include "exit_menu.hpp"

using namespace std;

ExitMenu::ExitMenu(Game *game){
    this->game = game;
}

 void ExitMenu::execute(){
     string user_input;
     
     cout << "Enter '1' to play again, otherwise any other key to exit...\n";
     cin >> user_input;

     if(user_input != "1"){
         cout <<"\nThanks for playing!!!\n";
     }
     else{
         game->restart();
         game->start();
     }

 }
