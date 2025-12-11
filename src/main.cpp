#include "include/config.hpp"

int main()
{
    std::mt19937 mt(time(nullptr));

    Entity player(1, 1, 100, 10, '@');

    char io;

    initscr();
    start_color();
    noecho();
    cbreak();
    keypad(stdscr, TRUE);
    refresh();

    if (!has_colors())
    {
        printw("[ERROR]: Your terminal doesn't have colors!\n");
        printw("[INFO]: Would you like to continue in colorless mode (y / n): ");
        char io = getch();
        switch (io)
        {
            case 'n': endwin(); return 0; break;
            case 'y': break;
        }
    }

    // eyesore
    WINDOW *header = newwin(WINDOW_HEADER_SIZE_Y, WINDOW_HEADER_SIZE_X, 0, 0);
    WINDOW *main = newwin(WINDOW_MAIN_SIZE_Y, WINDOW_MAIN_SIZE_X, WINDOW_HEADER_SIZE_Y, 0);
    WINDOW *log = newwin(WINDOW_LOG_SIZE_Y, WINDOW_LOG_SIZE_X, WINDOW_HEADER_SIZE_Y + WINDOW_MAIN_SIZE_Y + 1, 0);
    WINDOW *stats = newwin(WINDOW_STATS_SIZE_Y, WINDOW_STATS_SIZE_X, WINDOW_HEADER_SIZE_Y + WINDOW_MAIN_SIZE_Y + 1, WINDOW_LOG_SIZE_X);
    WINDOW *inventory = newwin(WINDOW_STATS_SIZE_Y, WINDOW_STATS_SIZE_X, WINDOW_HEADER_SIZE_Y + WINDOW_MAIN_SIZE_Y + 1, WINDOW_LOG_SIZE_X + WINDOW_STATS_SIZE_X);
    box(header, 0, 0);
    box(main, 0, 0);
    box(log, 0, 0);
    box(stats, 0, 0);
    box(inventory, 0, 0);
    wrefresh(inventory);
    wrefresh(stats);
    wrefresh(log);
    wrefresh(header);
    wrefresh(main);

    generate();

    while (true)
    {
        render(main, player);
        io = getch(); if (io == ' ') break;
        wrefresh(inventory);
        wrefresh(stats);
        wrefresh(log);
        wrefresh(header);
        wrefresh(main);
    }

    endwin();
    return 0;
}