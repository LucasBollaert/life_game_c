/*
** EPITECH PROJECT, 2020
** lib
** File description:
** count nuber of line to an array
*/

#include <stddef.h>

int count_array(char **str)
{
    int count = 0;

    while (str[count] != NULL)
        count += 1;
    return (count);
}
