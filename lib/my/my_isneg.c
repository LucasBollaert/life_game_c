/*
** EPITECH PROJECT, 2020
** lib
** File description:
** number positiv or neg
*/

#include <unistd.h>

int my_isneg(int n)
{
    char c;
    if (n < 0)
        c = 'N';
    if (n >= 0)
        c = 'P';
    write(1, &c, 1);
    return (0);
}
