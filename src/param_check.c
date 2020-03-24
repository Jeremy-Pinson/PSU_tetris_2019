/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** param_check
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>
#include "my.h"
#include "tetris.h"

int param_check(int argc, char *argv[], key_param_t *key)
{
    int opt;
    while ((opt = getopt(argc, argv, "h")) != -1) {
        switch (opt) {
        case 'h': print_help();
            break;
        default:
            return (0);
        }
    }
    return(0);
}