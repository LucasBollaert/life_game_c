/*
** EPITECH PROJECT, 2020
** my_str_to_word_array
** File description:
** permit to range texte.
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "../my/my.h"

int my_count_word(char *str)
{
    int count = 0;
    int result = 0;

    while (str[count] != '\0' && str != NULL) {
        if (count == 0 && str[count] > 33 && str[count] < 127)
            result += 1;
        else if (str[count - 1] == ' ' && str[count] > 33 && str[count] < 127)
            result += 1;
        count++;
    }
    return (result);
}

int my_strlen2(char *str, int count)
{
    int result = 0;

    while (str[count] > 32 && str[count] < 127) {
        result++;
        count++;
    }
    return (result);
}

char *my_strcpy_bis(char *dest, char *str, int c_s)
{
    int c_d = 0;

    while (str[c_s] > 32 && str[c_s] < 127 && str[c_s] != ' ') {
        dest[c_d] = str[c_s];
        c_d += 1;
        c_s += 1;
    }
    dest[c_d] = '\0';
    return (dest);
}

char **my_str_to_word_array(char *str)
{
    char **dest = malloc(sizeof(char *) * (my_count_word(str) + 2));
    int c_l = 0;
    int c_c = 0;
    int c_s = 0;

    while (str[c_s] != '\0' && str != NULL && c_l < 10) {
        if (str[c_s] > 32 && str[c_s] < 127 && str[c_s] != ' ') {
            dest[c_l] = malloc(sizeof(char) * (my_strlen2(str, c_s) + 1));
            my_strcpy_bis(dest[c_l], str, c_s);
            c_s += my_strlen2(str, c_s);
            c_l += 1;
            c_c += 1;
        }
    else
        c_s += 1;
    }
    dest[c_l] = NULL;
    return (dest);
}
