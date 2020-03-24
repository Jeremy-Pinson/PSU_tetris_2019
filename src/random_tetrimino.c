/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** random_tetrimino
*/

#include <stdlib.h>
#include "tetris.h"
#define RAND_MAX 100

tetrimilist_t *random_tetrimino(tetrimilist_t *terimilist)
{
    int y = rand();
    tetrimilist_t *the_random_tetrimino = terimilist;
    for (int i = 0; i < y; i++)
        the_random_tetrimino = the_random_tetrimino->next;   
    return (the_random_tetrimino);
}