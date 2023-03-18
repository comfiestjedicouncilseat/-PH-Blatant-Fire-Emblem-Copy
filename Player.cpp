#include <iostream>
#include <fstream>
#include "Player.hpp"

Player::Player(std::string nameChoice, std::string classChoice, std::string skillChoice){

    name = nameChoice;
    classType = classChoice;
    expCurr = 0;
    
    // update stats
    std::ifstream fin("Data Files/Class Data/" + classChoice + ".txt");
    int currLine;
    
    // setting player class base stats
    fin >> currLine;
    stats.hpTotal = stats.hpCurr = currLine;
    fin >> currLine;
    stats.atkTotal = stats.atkCurr = currLine;
    fin >> currLine;
    stats.dexTotal = stats.dexCurr = currLine;
    fin >> currLine;
    stats.spdTotal = stats.spdCurr = currLine;
    fin >> currLine;
    stats.defTotal = stats.defCurr = currLine;
    fin >> currLine;
    stats.resTotal = stats.resCurr = currLine;
    fin >> currLine;
    stats.conTotal = stats.conCurr = currLine;
    fin >> currLine;
    stats.moveTotal = stats.moveCurr = currLine;

}

Player::~Player(){
    
}






















// Player::Player(std::string nm, std::string type, int lvl, int hp, int def, int atk, int skill, int spd, int move, int con){
//     name = nm;
//     classType = type;
//     expCurr = 0;
//     level = lvl;
//     hpTotal = hp;        //health
//     hpCurr = hp;
//     defTotal = def;       //damage reduction
//     defCurr = def;
//     //offensive
//     atkTotal = atk;       //damage alpha
//     atkCurr = atk;
//     skillTotal = skill;     //crit chance, hit rate
//     skillCurr = skill;
//     //misc
//     spdTotal = spd;       //doubling, avoid
//     spdCurr = spd;
//     moveTotal = move;      //movement
//     moveCurr = move;       
//     conTotal = con;       //ability to negate weight on items
//     conCurr = con;
// }