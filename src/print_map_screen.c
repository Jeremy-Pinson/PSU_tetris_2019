/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** print_map_screen
*/

#include "tetris.h"
#include "my.h"

bool print_map_screen(char **map, int nb_line)
{
    for (int i = 0; i < nb_line + 2; i++)
        printw(map[i]);
    return (true);
}