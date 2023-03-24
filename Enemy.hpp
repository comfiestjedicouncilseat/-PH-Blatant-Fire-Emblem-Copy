#include <iostream>
#include "Entity.hpp"
#include "EnemyStats.hpp"

class Enemy : Entity{
    private:

        EnemyStats stats;

    public:

        Enemy(std::string nameChoice, std::string classChoice, std::string skillChoice);
        ~Enemy();

        std::string getName();

        // need functions to calc stuff like avoid, which depends on stats and inventory weapons

};