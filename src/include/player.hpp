#ifndef _PLAYER_HPP
#define _PLAYER_HPP

#include "config.hpp"
#include "entity.hpp"

class Player : public Entity
{
public:
    Player(int sX, int sY, int sHealth, int sDamage, char sIcon) : Entity(sX, sY, sHealth, sDamage, sIcon) {}

    void getInput()
    {
        char ch = getch();
        switch (ch)
        {
            case 'w':
                if (y - 1 != 0 && world[y - 1][x] != '#') y--;
                break;
            case 'a':
                if (x - 1 != 0 && world[y][x - 1] != '#') x--;
                break;
            case 's':
                if (y + 1 != WINDOW_MAIN_SIZE_Y && world[y + 1][x] != '#') y++;
                break;
            case 'd':
                if (x + 1 != WINDOW_MAIN_SIZE_X - 1 && world[y][x + 1] != '#') x++;
                break;
            default:
                break;
        }
    }
};

#endif