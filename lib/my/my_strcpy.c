/*
** EPITECH PROJECT, 2019
** my_strcpy.c
** File description:
** copy string
*/

char *my_strcpy(char *dest, char const *src)
{
    for (int i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    return dest;
}

