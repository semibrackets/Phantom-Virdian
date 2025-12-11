#ifndef _CONFIG_HPP
#define _CONFIG_HPP

#include <iostream>
#include <fstream>
#include <cstdarg>
#include <ctime>
#include <vector>
#include <random>
#include <ncurses.h>

#include "render.hpp"
#include "generate.hpp"
#include "entity.hpp"

#define MAXIMUM_SIZE_X 100
#define MAXIMUM_SIZE_Y (MAXIMUM_SIZE_X / 2)

#define WINDOW_HEADER_SIZE_X MAXIMUM_SIZE_X
#define WINDOW_HEADER_SIZE_Y 3

#define WINDOW_MAIN_SIZE_X MAXIMUM_SIZE_X
#define WINDOW_MAIN_SIZE_Y 20

#define WINDOW_LOG_SIZE_X (MAXIMUM_SIZE_X / 2)
#define WINDOW_LOG_SIZE_Y 8

#define WINDOW_STATS_SIZE_X (WINDOW_LOG_SIZE_X / 2)
#define WINDOW_STATS_SIZE_Y WINDOW_LOG_SIZE_Y

#define WINDOW_INVENTORY_SIZE_X WINDOW_STATS_SIZE_X
#define WINDOW_INVENOTRY_SIZE_Y WINDOW_LOG_SIZE_Y

extern std::vector<std::vector<char>> world;

#endif