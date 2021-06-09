/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** melange 2 suite algébrique
*/

int my_strlen(char *str);

char *my_strcat(char *dest, char const *src)
{
    int count = my_strlen(dest);
    int a = 0;

    while (src[a] != '\0') {
        dest[count] = src[a];
        a++;
        count++;
    }
    dest[count] = '\0';
    return (dest);
}