#include "generate.hpp"
#include "config.hpp"

void generate(void)
{
    int num;
    for (int y = 1; y < WINDOW_MAIN_SIZE_Y; y++)
    {
        for (int x = 1; x < WINDOW_MAIN_SIZE_X; x++)
        {
            if (y == 1 || x == 1 || y == WINDOW_MAIN_SIZE_Y - 1 || x == WINDOW_MAIN_SIZE_X - 1) world[y][x] = 0;
            num = std::rand() % 10;
            num == 5 ? world[y][x] = ',' : num == 2 ? world[y][x] = '.' : world[y][x] = ' ';
        }
    }
}