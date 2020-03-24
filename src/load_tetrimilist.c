/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** load_tetrimilist
*/

#include "tetris.h"
#include <stdlib.h>

tetrimilist_t *load_tetrimilist(void)
{
    tetrimilist_t *tetrimilist = malloc(sizeof(tetrimilist_t));
    //test
    char *tetri_test[3] = {" * ","***", NULL};
    //test
    tetrimilist->tetrimino = tetri_test;
    tetrimilist->next = tetrimilist;
    return (tetrimilist);
}