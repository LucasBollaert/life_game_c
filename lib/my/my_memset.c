/*
** EPITECH PROJECT, 2020
** lib
** File description:
** my_memset
*/

#include <stddef.h>
#include "my.h"

void *my_memset(void *dest, int val, size_t len)
{
    unsigned char *ptr = dest;
    while (len-- > 0) {
        *ptr++ = val;
    }
    return dest;
}
