/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** cat i dont know what but i love coding style
*/

#include <stdio.h>
#include <stdlib.h>

int my_strlen(char *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int count = my_strlen(dest);
    int a = 0;

    while (src[a] != '\0' && nb > a) {
        dest[count] = src[a];
        a++;
        count++;
    }
    dest[count] = '\0';
    return (dest);
}
