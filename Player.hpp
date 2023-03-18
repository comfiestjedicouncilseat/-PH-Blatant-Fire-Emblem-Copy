#include <iostream>
#include "Entity.hpp"

class Player : public Entity{
    private:

        std::string classType;
        int expCurr;

    public:

        Player();
        //Obsolete constructor?
        // Player(std::string nm, std::string type, int lvl, int hp, int def, int atk, int skill, int spd, int move, int con);
        ~Player();


};