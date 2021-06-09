/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** my_strncmp
*/

#include <stdio.h>

int my_strlen_bis(char const *str);

int my_strncmp(char const *s1, char const *s2, int n)
{
    int count = 0;

    while (s1[count] != '\0' && s2[count] != '\0' && count < n) {
        if (s1[count] != s2[count])
            return (1);
        count++;
    }
    if (count < n)
        return (1);
    return (0);
}
