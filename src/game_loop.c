/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** game_loop
*/

#include "my.h"
#include "tetris.h"
#include "time.h"

bool clock_manager(void)
{
    static int buffer = -1;
    if (clock()/CLOCKS_PER_SEC!= buffer) {
        buffer = clock()/CLOCKS_PER_SEC;
        my_put_nbr( buffer);
        return (true);
    }
    return (false);
}

void game_loop(key_param_t param, char **map_screen, tetrimilist_t *tetrimilist)
{
    bool in_game = true;
    while (in_game) {
        if ( clock_manager() ) {
            clear();
            in_game = print_tetrimino(map_screen, tetrimilist);
            in_game = print_map_screen(map_screen, param.size.y);
            refresh();
        }
    }
}