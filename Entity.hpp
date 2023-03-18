#include <iostream>

//the most basic skeleton (bad to the bone du nu nu nu nuu nu)

class Entity{
    protected:
        std::string name;
        int level;
        //defensive
        int hpTotal;        //health
        int hpCurr;
        int defTotal;       //damage reduction
        int defCurr;
        int resTotal;
        int resCurr;
        //offensive
        int atkTotal;       //damage alpha
        int atkCurr;
        int skillTotal;     //crit chance, hit rate
        int skillCurr;
        //misc
        int spdTotal;       //doubling, avoid
        int spdCurr;
        int moveTotal;      //movement
        int moveCurr;       
        int conTotal;       //ability to negate weight on items
        int conCurr;

        //statuses
        bool alive;         //is it alive
        bool immune;        //does it negate statuses
        unsigned int statuses[4] = {0, 0, 0, 0};      //0 for none, make rest later

    public:

        Entity();
        Entity(std::string nm, int lvl, int hp, int def, int res, int atk, int skill, int spd, int move, int con, bool imm);
        ~Entity();
/*
        int set_hpTotal();        //health
        int set_hpCurr();
        int set_defTotal();       //physical damage reduction
        int set_defCurr();
        int set_resTotal();       //magic damage reduction
        int set_resCurr();      
        int set_atkTotal();       //damage alpha
        int set_atkCurr();
        int set_skillTotal();     //crit chance, hit rate
        int set_skillCurr();
        int set_spdTotal();       //doubling, avoid
        int set_spdCurr();
        int set_moveTotal();      //movement
        int set_moveCurr();       
        int set_conTotal();       //ability to negate weight on items
        int set_conCurr();
        bool set_alive();         //is it alive
        bool set_immune();        //does it negate statuses
        unsigned int set_statuses();
*/
};