/*
** EPITECH PROJECT, 2020
** Function my_strncpy
** File description:
** function my_strncpy
*/

#include <stdlib.h>
#include <stdio.h>

int my_strlen(char *str);

char *my_strncpy(char *src, int n)
{
    int count = 0;
    char *dest = malloc(sizeof(char) * (n + 1));

    while (src[count] != '\0' && n > 0) {
        dest[count] = src[count];
        count++;
        n--;
    }
    dest[count] = '\0';
    return (dest);
}
