#include <iostream>
#include "Entity.hpp"

Entity::Entity(){

    name = "";
    level = 0;
    hpTotal = 0;        //health
    hpCurr = 0;
    defTotal = 0;       //damage reduction
    defCurr = 0;
    resTotal = 0;
    resTotal = 0;
    //offensive
    atkTotal = 0;       //damage alpha
    atkCurr = 0;
    skillTotal = 0;     //crit chance, hit rate
    skillCurr = 0;
    //misc
    spdTotal = 0;       //doubling, avoid
    spdCurr = 0;
    moveTotal = 0;      //movement
    moveCurr = 0;       
    conTotal = 0;       //ability to negate weight on items
    conCurr = 0;
    //statuses   
    bool immune = false;        //does it negate statuses

}

Entity::Entity(std::string nm, int lvl, int hp, int def, int res, int atk, int skill, int spd, int move, int con, bool imm){

    name = nm;
    level = lvl;
    hpTotal = hp;        //health
    hpCurr = hp;
    defTotal = def;       //damage reduction
    defCurr = def;
    resTotal = res;
    resCurr = res;
    //offensive
    atkTotal = atk;       //damage alpha
    atkCurr = atk;
    skillTotal = skill;     //crit chance, hit rate
    skillCurr = skill;
    //misc
    spdTotal = spd;       //doubling, avoid
    spdCurr = spd;
    moveTotal = move;      //movement
    moveCurr = move;       
    conTotal = con;       //ability to negate weight on items
    conCurr = con;
    //statuses   
    bool immune = imm;        //does it negate statuses

}