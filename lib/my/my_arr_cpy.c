/*
** EPITECH PROJECT, 2020
** lib
** File description:
** cpy arr to a new
*/

#include "my.h"

char **my_arrcpy(char **arr)
{
    char **dest = malloc(sizeof(char *) * (count_array(arr) + 1));
    int l = 0;

    while (arr[l] != NULL) {
        dest[l] = malloc(sizeof(char) * (my_strlen(arr[l]) + 1));
        dest[l] = my_strcpy(dest[l], arr[l]);
        l += 1;
    }
    dest[l] = NULL;
    return (dest);
}
