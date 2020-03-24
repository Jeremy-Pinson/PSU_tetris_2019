/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** print_tetrimino
*/

#include "tetris.h"
#include <stdlib.h>

void check_piece(int *count, char piece)
{
    if (piece == '*')
        *count++;
}

int count_piece_tetrimino(char **tetrimino)
{
    int count = 0;
    for (int i = 0; tetrimino[i]; i++) {
        for (int y = 0; tetrimino[i][y] != '\0'; y++) {
            check_piece(&count, tetrimino[i][y]);
        } 
    }
    return (count);
}

void filling_point_array(char **tetrimino, vector_2i_t *point_array)
{
    int i = 0;
    int x = 0;
    for (int y = 0; tetrimino[y]; x++) {
        if (tetrimino[y][x] == '\0') {
            x = 0;
            y++;
        }
        if (tetrimino[y][x] == '*') {
            point_array[i].x = x;
            point_array[i].y = y;
            i++;
        }
    }
    
}

bool print_tetrimino(char **map, tetrimilist_t *tetrimino)
{
    tetrimilist_t *random_tetrimino_var;
    static vector_2i_t* point_of_tetrimino;
    static bool falling = false;
    if (falling == false) {
        falling = true;
        random_tetrimino_var = random_tetrimino(tetrimino);
        point_of_tetrimino = malloc(sizeof(vector_2i_t) * count_piece_tetrimino(random_tetrimino_var->tetrimino));
        filling_point_array(random_tetrimino_var->tetrimino, point_of_tetrimino);
    }
    return (true);
}