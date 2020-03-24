/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** default_key_config
*/

#include "tetris.h"
#include <curses.h>

key_param_t default_key_config(void)
{
    key_param_t key;
    key.drop = KEY_DOWN;
    key.left = KEY_LEFT;
    key.right = KEY_RIGHT;
    key.turn = KEY_UP;
    key.quit = 'q';
    key.pause = ' ';
    key.size.x = 20;
    key.size.y = 10;
    key.hide_next = false;
    key.debug = false;

    return (key);
}