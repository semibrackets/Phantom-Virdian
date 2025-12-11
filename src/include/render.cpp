#include "render.hpp"

void render(WINDOW *main)
{
    wclear(main);
    box(main, 0, 0);
    for (int y = 0; y < WINDOW_MAIN_SIZE_Y; y++)
    {
        for (int x = 0; x  < WINDOW_MAIN_SIZE_X; x++)
        {
            mvwaddch(main, y, x, world[y][x]);
        }
    }
}