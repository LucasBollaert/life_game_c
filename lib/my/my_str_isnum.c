/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** return 1 if is a num
*/

int my_str_isnum(char const *str)
{
    int count = 0;

    while (str[count] != '\0') {
        if ((str[count] <= 47 || str[count] >= 58) && str[count] != '-')
            return (0);
        count++;
    }
    return (1);
}
