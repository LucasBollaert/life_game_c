/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** comp 2 str
*/

int my_strlen_bis(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

int my_strcmp(char const *s1, char const *s2)
{
    int count = 0;

    if (my_strlen_bis(s1) != my_strlen_bis(s2))
        return (1);
    while (s1[count] != '\0' && s2[count] != '\0') {
        if (s1[count] != s2[count])
            return (1);
        count++;
    }
    return (0);
}
