/*
** EPITECH PROJECT, 2020
** my_strupcase
** File description:
** gift to norme
*/

char *my_strupcase(char *str)
{
    int count = 0;

    while (str[count] != '\0') {
        if (str[count] >= 97 && str[count] <= 122)
            str[count] = str[count] - 32;
        count++;
    }
    return (str);
}
