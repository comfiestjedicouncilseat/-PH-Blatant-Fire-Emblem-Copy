#include <iostream>
#include <fstream>
#include "Enemy.hpp"

Enemy::Enemy(std::string nameChoice, std::string classChoice, std::string skillChoice){

    name = nameChoice;
    classType = classChoice;
    
    // update stats
    std::ifstream fin("Data Files/Player Data/Class Data" + classChoice + ".txt");
    int currLine;
    
    // setting player class base stats
    // probably really crappy code, can't figure better way yet
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

    // setting up weapon ranks, skills, inventory, effects

}

Enemy::~Enemy(){
    
}

std::string Enemy::getName(){
    return name;
}