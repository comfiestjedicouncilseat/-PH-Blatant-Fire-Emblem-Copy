#include <iostream>
#include "EnemyStats.hpp"

EnemyStats::EnemyStats(){

    int level = 1;              // actual level of player

    int hpTotal = 0;            // total health pool
    int atkTotal = 0;           // damage alpha
    int dexTotal = 0;           // each point is +1 hit and +1 crit
    int spdTotal = 0;           // affects doubling and each point is +1 avoid
    int defTotal = 0;           // phys damage negation
    int resTotal = 0;           // res damage negation
    int conTotal = 0;           // affect speed deduction due to item weight
    int moveTotal = 0;          // affect total movement

    // same stats as above, but maybe depleted, debuffed, buffed, etc.
    int hpCurr = 0;
    int atkCurr = 0;
    int dexCurr = 0;
    int spdCurr = 0;
    int defCurr = 0;
    int resCurr = 0;
    int conCurr = 0;
    int moveCurr = 0;

}

EnemyStats::~EnemyStats(){
    
}