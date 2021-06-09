/*
** EPITECH PROJECT, 2021
** lib
** File description:
** lib fonction
*/

#include "my.h"

int my_alpha_num(char *str)
{
    int count = 0;

    while (str[count] != '\0') {
        if ((str[count] > 'A' && str[count] < 'Z') ||
            (str[count] > 'a' && str[count] < 'z') ||
            (str[count] > '0' && str[count] < '9'))
        count += 1;
        else
            return (-1);
    }
    return (0);
}
