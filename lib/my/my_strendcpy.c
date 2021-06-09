/*
** EPITECH PROJECT, 2021
** lib
** File description:
** copy a string after an other
*/

#include "my.h"

char *my_strendcpy(char *a, char *b)
{
    int c_a = 0;
    int c_b = 0;
    char *dest = malloc(sizeof(char) * (my_strlen(a) + my_strlen(b) + 1));

    while (a[c_a] != '\0') {
        dest[c_a] = a[c_a];
        c_a += 1;
    }
    if (b != NULL) {
        while (b[c_b] != '\0') {
            dest[c_a] = b[c_b];
            c_b += 1;
            c_a += 1;
        }
    }
    dest[c_a] = '\0';
    return (dest);
}
