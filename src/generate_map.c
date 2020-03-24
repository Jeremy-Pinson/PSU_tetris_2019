/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** generate_map
*/

#include "tetris.h"
#include "my.h"
#include <stdlib.h>

char *generate_line(int nb_space, char one, char two)
{
    char *str;
    str = malloc(sizeof(char) * nb_space + 3);
    str[0] = one;
    for (int i = 1; i <= nb_space; i++)
        str[i] = two;
    str[nb_space + 1] = one;
    str[nb_space + 2] = '\n';
    str[nb_space + 3] = '\0';
    return (str);
}

char **generate_map(vector_2i_t resolution)
{
    char **map = malloc(sizeof(char *) * resolution.y + 3);
    map[0] = generate_line(resolution.x, '*', '_');
    for (int y = 1; y <= resolution.y; y++)
        map[y] = generate_line(resolution.x, '|', ' ');
    map[resolution.y + 1] = generate_line(resolution.x, '*', '_');
    return (map);
}