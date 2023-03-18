#include <iostream>
#include <fstream>
#include "Player.hpp"


int main();


int main(){
    Player P;

    // variable to hold user's choice in current screen
    std::string option;

    while (std::cin >> option){
        //  display the screen with options====================================================

        //  user input for selecting an option===========================

        if (option == "ng"){
            //start a "New Game"

            //choose a save file i guess
            
            std::cout << "pick a class" << std::endl;
            std::cin >> option;

            // std::ifstream fin(option);
            // std::string nextLine;
            // while (fin >> nextLine){

            // }


        } else if (option == "con"){
            // continue an existing game ( multiple saves system?? )

        } else if (option == "op"){
            // goes to options screen to change stuff


        } else if (option == "ex"){
            break;
        }
    }

    //outside of infinite while loop



    return 0;
}

void classInfoInsert(std::string classChoice){
    
    if (classChoice == "Soldier"){
        std::ifstream fin("Soldier.txt");
    } else if (classChoice == "Pegasus Rider"){
        std::ifstream fin("Pegasus Rider.txt");
    }

    



}