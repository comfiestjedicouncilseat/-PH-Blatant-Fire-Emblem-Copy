#include <iostream>
#include "Player.hpp"

Player::Player(){
    name = "";
    classType = "";
    expCurr = 0;
    level = 1;
    hpTotal = 0;      
    hpCurr = 0;
    defTotal = 0;       
    defCurr = 0;
    resTotal = 0;
    resCurr = 0;
    atkTotal = 0; 
    atkCurr = 0;
    skillTotal = 0;   
    skillCurr = 0;
    spdTotal = 0;      
    spdCurr = 0;
    moveTotal = 0;    
    moveCurr = 0;       
    conTotal = 0;  
    conCurr = 0;

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