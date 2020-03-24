/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** tetris
*/



#ifndef TETRIS_H_
#define TETRIS_H_

#include <ncurses.h>
#include <curses.h>
#include <stdbool.h>

void print_help(void);

typedef struct vector_2i_s vector_2i_t;
typedef struct key_param_s key_param_t;
typedef struct tetrimilist_s tetrimilist_t;

void game_loop(key_param_t param, char **map_screen, tetrimilist_t *tetrimilist);
key_param_t default_key_config(void);
int param_check(int argc, char *argv[], key_param_t *key);
bool print_map_screen(char **map, int nb_line);
char **generate_map(vector_2i_t resolution);
tetrimilist_t *random_tetrimino(tetrimilist_t *terimilist);
bool print_tetrimino(char **map, tetrimilist_t *tetrimino);
tetrimilist_t *load_tetrimilist(void);


struct vector_2i_s
{
    int x;
    int y;
};

struct key_param_s
{
    int level;
    int left;
    int right;
    int turn;
    int drop;
    int quit;
    int pause;
    vector_2i_t size;
    bool hide_next;
    bool debug;
};

struct tetrimilist_s
{
    char **tetrimino;
    vector_2i_t size;
    tetrimilist_t *next;
};

#endif
