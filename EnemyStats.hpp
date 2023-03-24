#include <iostream>

class EnemyStats{

    friend class Enemy;

    private:

        int level;              // actual level of player

        int hpTotal;            // total health pool
        int atkTotal;           // damage alpha
        int dexTotal;           // each point is +1 hit and +1 crit
        int spdTotal;           // affects doubling and each point is +1 avoid
        int defTotal;           // phys damage negation
        int resTotal;           // res damage negation
        int conTotal;           // affect speed deduction due to item weight
        int moveTotal;          // affect total movement

        // same stats as above, but maybe depleted, debuffed, buffed, etc.
        int hpCurr;
        int atkCurr;
        int dexCurr;
        int spdCurr;
        int defCurr;
        int resCurr;
        int conCurr;
        int moveCurr;

    public:

        EnemyStats();
        ~EnemyStats();

};