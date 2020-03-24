/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>
#include <curses.h>
#include "my.h"
#include "tetris.h"

int main(int argc, char *argv[])
{
    key_param_t key_param = default_key_config();
    if (param_check(argc, argv, &key_param))
        return (84);
    char **map_screen = generate_map(key_param.size);
    tetrimilist_t *tetrimilist = load_tetrimilist();
    initscr();
    game_loop(key_param, map_screen, tetrimilist);
    endwin();
    return (0);
}