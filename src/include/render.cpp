#include "render.hpp"

void render(WINDOW *main, Entity e, ... )
{
    wclear(main);
    box(main, 0, 0);

    va_list vals;
    va_start(vals, e);
    
    for (int y = 0; y < WINDOW_MAIN_SIZE_Y; y++)
    {
        for (int x = 0; x  < WINDOW_MAIN_SIZE_X; x++)
        {
            mvwaddch(main, y, x, world[y][x]);
        }
    }

    mvwaddch(main, e.y, e.x, e.icon);

    Entity enemy(0, 0, 0, 0, '\0');
    while (true)
    {
        enemy = va_arg(vals, Entity);
        if (enemy.icon == '\0') break;
        mvwaddch(main, enemy.y, enemy.x, enemy.icon);
    }

    va_end(vals);

    wrefresh(main);
}