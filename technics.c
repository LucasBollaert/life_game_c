/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/

#include <sys/wait.h>
#include <ncurses.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include "include"
#include "life.h"

void my_putw_arr(char **arr)
{
    int l = 0;

    while (arr[l] != NULL) {
        printw("%s\n", arr[l]);
        l += 1;
    }
}

char **my_reader(char *file_name)
{
    struct stat s;
    char *buff;
    int fd;
    int count;
    char **map;

    stat(file_name, &s);
    buff = malloc(sizeof(char) * (s.st_size + 1));
    fd = open(file_name, O_RDONLY);
    if (fd < 0 || buff == NULL)
	return (NULL);
    count = read(fd, buff, s.st_size);
    buff[count] = '\0';
    map = my_line_array(buff);
    return (map);
}
