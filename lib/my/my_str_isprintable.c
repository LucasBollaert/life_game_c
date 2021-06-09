/*
** EPITECH PROJECT, 2020
** my_str_isprintable
** File description:
** or not
*/

int my_str_isprintable(char const *str)
{
    int count = 0;

    while (str[count] != '\0') {
        if (str[count] <= 31 && str[count] >= 127)
            return (0);
        count++;
    }
    return (1);
}
