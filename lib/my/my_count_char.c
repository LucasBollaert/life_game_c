/*
** EPITECH PROJECT, 2020
** lib
** File description:
** count nuber of a char give in param
*/

int my_count_char(char *str, char c)
{
    int count = 0;
    int result = 0;

    while (str[count] != '\0') {
        if (str[count] == c)
            result += 1;
        count += 1;
    }
    return (result);
}
