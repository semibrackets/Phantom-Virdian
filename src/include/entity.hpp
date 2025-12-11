#ifndef _ENTITY_HPP
#define _ENTITY_HPP

#include "config.hpp"

class Entity
{
public:
    int x, y;
    int health, damage;
    char icon;

    Entity(int sX, int sY, int sHealth, int sDamage, char sIcon)
    {
        x = sX;
        y = sY;
        health = sHealth;
        damage = sDamage;
        icon = sIcon;
    }
};

#endif