/*
** EPITECH PROJECT, 2020
** my_str_isupper
** File description:
** norme
*/

int my_str_isupper(char const *str)
{
    int count = 0;

    while (str[count] != '\0') {
        if (str[count] <= 65 || str[count] >= 90)
            return (0);
        count++;
    }
    return (1);
}
