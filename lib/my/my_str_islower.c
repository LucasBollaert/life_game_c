/*
** EPITECH PROJECT, 2020
** my_str_islower
** File description:
** return 1 if a string was just mini charactere
*/

int my_str_islower(char const *str)
{
    int count = 0;

    while (str[count] != '\0') {
        if (str[count] <= 96 && str[count] >= 123)
            return (0);
        count++;
    }
    return (1);
}
