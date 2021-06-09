/*
** EPITECH PROJECT, 2020
** my_compute_power_rec.c
** File description:
** idk
*/

#include <stdio.h>

int my_compute_power_rec(int nb, int p)
{
    int result = nb;

    if (nb == 0)
        return (1);
    if (p < 0)
        return (0);
    if (p < 2)
        return (result);
    p--;
    result = my_compute_power_rec(nb, p);
    result = nb * result;
    return (result);
}
