/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** printw_nbr
*/

#include "tetris.h"
#include "my.h"

char *nbr_to_str(int nbr)
{
    int i = 1;
    for (; nbr >= 10; i *= 10)
        nbr /= 10;
    char str[i/10];
    for (int y = 0; i >= 10; y++) {
        str[y] = nbr / i + '0';
        i /= 10;
    }
    

}