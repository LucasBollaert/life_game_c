/*
** EPITECH PROJECT, 2020
** lib
** File description:
** line array
*/

#include "my.h"
#include <stdio.h>

int my_strnclen(char *data, int count, char c)
{
    while (data[count] != '\0') {
        if (data[count] == c)
            return (count);
        count += 1;
    }
    return (count);
}

int my_strcclen(char *data, int count, char c)
{
    int result = 0;

    while (data[count] != '\0') {
        if (data[count] == c)
            result += 1;
        count += 1;
    }
    return (result);
}

char **my_line_array(char *str)
{
    int c = 0;
    int l = 0;
    int x = 0;
    char **dest = malloc(sizeof(char *) * (my_strcclen(str, 0, '\n') + 2));

    dest[0] = malloc(sizeof(char) * (my_strnclen(str, x, '\n') + 2));
    while (str[x] != '\0') {
        dest[l][c] = str[x];
        x += 1;
        c += 1;
        if (str[x] == '\n') {
            dest[l][c] = '\0';
            l += 1;
            dest[l] = malloc(sizeof(char) * (my_strnclen(str, x, '\n') + 2));
            c = 0;
            x += 1;
        }
    }
    dest[l] = NULL;
    return (dest);
}
