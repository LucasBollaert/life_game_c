/*
** EPITECH PROJECT, 2020
** my_is_prime
** File description:
** say if it's a prime or not
*/

#include <stdio.h>

int my_is_prime(int a)
{
    int count = 2;

    if (a <= 0 || a == 1)
        return (0);
    while (count < a) {
        if (a % count == 0) {
            return (0);
        }
        count++;
    }
    return (1);
}
