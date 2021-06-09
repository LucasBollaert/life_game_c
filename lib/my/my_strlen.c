/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** count nbr o charactere
*/

#include <unistd.h>

int my_strlen(char *str)
{
    int i = 0;

    if (str != NULL)
        while (str[i] != '\0')
            i += 1;
    return (i);
}
