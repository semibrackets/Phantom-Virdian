#include "generate.hpp"
#include "config.hpp"

void generate(void)
{
    int num;
    for (int y = 1; y < WINDOW_MAIN_SIZE_Y; y++)
    {
        for (int x = 1; x < WINDOW_MAIN_SIZE_X; x++)
        {
            num = std::rand() % 10;
            num == 5 ? world[y][x] = ',' : num == 2 ? world[y][x] = '.' : world[y][x] = ' ';
        }
    }
}