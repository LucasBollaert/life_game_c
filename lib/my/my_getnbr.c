/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** retrun the number contain in a string
*/

#include <stdio.h>

int my_count_neg(char const *str)
{
    int i = 0;
    int neg = 0;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-') {
            neg = neg + 1;
        }
        i++;
    }
    return (neg);
}

int my_getnbr(char *str)
{
    int count = 0;
    int neg = 1;
    int nb = 0;

    while (str[count] == '+' || str[count] == '-') {
        count++;
    }
    while (str[count] >= '0' && str[count] <= '9') {
        nb =  nb * 10;
        nb = nb + str[count] - 48;
        count++;
        if (nb < 0) {
            return (0);
        }
    }
    if (my_count_neg(str) % 2 != 0) {
        neg = -1;
    }
    nb = neg * nb;
    return (nb);
}
