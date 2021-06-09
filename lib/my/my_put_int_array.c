/*
** EPITECH PROJECT, 2020
** lib
** File description:
** print array of int
*/

#include "my.h"

void my_put_int_array(int *d, int i)
{
    while (d[i] != -1) {
      write(1, "int[", 4);
      my_put_nbr(i);
      write(1, "] = ", 4);
      my_put_nbr(d[i]);
      write(1, "\n", 1);
      i += 1;
    }
}
