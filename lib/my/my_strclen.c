/*
** EPITECH PROJECT, 2021
** lib
** File description:
** count the number of char before the charact give in parameter or
** end of string
*/

int my_strclen(char *data, char c)
{
    int count = 0;

    while (data[count] != '\0') {
        if (data[count] == c)
            return (count);
        count += 1;
    }
    return (count);
}
