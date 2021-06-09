/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** print a string
*/
#include <unistd.h>

void my_putstr(char *dest)
{
    int count = 0;

    while (dest[count] != '\0') {
        write(1, &dest[count], 1);
        count++;
    }
}
