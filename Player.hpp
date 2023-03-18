#include <iostream>
#include "Entity.hpp"
#include "PlayerStats.hpp"

class Player : Entity{
    private:

        int expCurr;
        PlayerStats stats;

    public:

        Player(std::string nameChoice, std::string classChoice, std::string skillChoice);
        ~Player();

        // need functions to calc stuff like avoid, which depends on stats and inventory weapons

};