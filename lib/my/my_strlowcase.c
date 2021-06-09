/*
** EPITECH PROJECT, 2020
** my_strlowcase
** File description:
** Death
*/

char *my_strlowcase(char *str)
{
    int count = 0;

    while (str[count] != '\0') {
        if (str[count] >= 65 && str[count] <= 90)
            str[count] = str[count] + 32;
        count++;
    }
    return (str);
}
