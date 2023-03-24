#include <iostream>
#include "Player.hpp"
#include "Enemy.hpp"

//function declarations
int main();
void mainMenu();
void newGame();
void conGame();
void settings();
void exitGame();
// may be moved to a class
void initBattle(Player player, Enemy enemy);

// function starts up the main menu
int main(){
    // starts the main menu up
    mainMenu();
    return 0;
}

// function for displaying and calling other menu functions
void mainMenu(){    

    // variable to hold user's choice in current screen
    std::string option;

    while (true){
        //  display the screen with options====================================================
        //  temporary text for letting user select opening option.
        std::cout << "Please type for one of the following options: " << std::endl;
        std::cout << "Start a New Game: ng" <<std::endl;
        std::cout << "Continue an Existing Game: con" <<std::endl;
        std::cout << "Settings: op" <<std::endl;
        std::cout << "Exit Game: ex" <<std::endl;

        //  user input for selecting an option===========================
        std::cin >> option;

        if (option == "ng"){
            newGame();

        } else if (option == "con"){
            conGame();

        } else if (option == "op"){
            settings();

        } else if (option == "ex"){
            exitGame();
        }
    }
// don't think the program ever reaches here

}

void newGame(){
    std::string nameChoice;
    std::string classOption;
    std::string classChoice;
    std::string skillChoice;
    // start a "New Game"
    std::cout << "Creating new game." << std::endl;
    // choose a save file i guess
    //

    std::cout << "Name yourself: ";
    std::cin >> nameChoice;
    std::cout << "Pick a class" << std::endl;
    std::cout << "a: Footsoldier \nb: Pegasus Rider" << std::endl;
    std::cin >> classOption;
    if (classOption == "a"){
        classChoice = "Footsoldier";
    } else if (classOption == "b"){
        classChoice = "Pegasus Rider";
    }

    std::cout << "Pick a skill" << std::endl;
    std::cin >> skillChoice;

    // create a new player object
    Player mainChar(nameChoice, classChoice, skillChoice);





    // testing for battle mechanics
    // need to find a way to create several enemies by loading from text file
    Enemy e1("Generic Bandit Joe", "Footsoldier", "Bad Breath");


    initBattle(mainChar, e1);




    
}

void initBattle(Player player, Enemy enemy){

    std::cout << player.getName() + " is fighting " + enemy.getName() << std::endl;



}





void conGame(){
    // continue an existing game ( multiple saves system?? )
    std::cout << "Chose to continue a current save." << std::endl;

    // need a way to go back to main menu
}

void settings(){
    // goes to options screen to change stuff
    std::cout << "Chose settings." << std::endl;

    // need a way to go back to main menu
}

//redundant??
void exitGame(){
    std::cout << "Chose to exit game." << std::endl;
    std::cout << "Game ended successfully" << std::endl;
    exit(0);
}