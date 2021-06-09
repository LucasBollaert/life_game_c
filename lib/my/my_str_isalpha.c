/*
** EPITECH PROJECT, 2020
** my_str_isalpha
** File description:
** return 1 if it's a alpha
*/

int my_str_isalpha(char const *str)
{
    int count = 0;

    while (str[count] != '\0') {
        if (str[count] >= 'a' && str[count] <= 'z')
            count++;
        else if (str[count] >= 'A' && str[count] <= 'Z')
            count++;
        else
            return (-1);
    }
    return (0);
}
