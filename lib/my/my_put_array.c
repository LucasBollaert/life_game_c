/*
** EPITECH PROJECT, 2020
** lib
** File description:
** print an array
*/

#include "my.h"
#include "stddef.h"
#include "unistd.h"

void my_put_arr(char **str, int x)
{
    int count = 0;

    while (str[count] != NULL) {
        my_putstr(str[count]);
        if (x == 1)
            write(1, "\n", 1);
        if (x == 2)
            write(1, " ", 1);
        count += 1;
    }
    if (x == 2)
        write(1, "\n", 1);
}
