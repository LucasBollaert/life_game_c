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

int my_check_other_case(char **map, int l, int c)
{
    int result = 0;

    //haut
    if (l - 1 > -1 && map[l - 1][c] == '*') {
        result += 1;
	//	printf("1");
    }
    //bas
    if (map[l + 1] != NULL && map[l + 1][c] == '*') {
        result += 1;
	//	printf("2");
    }
    //gauche
    if (c - 1 > -1 && map[l][c - 1] == '*') {
        result += 1;
	//	printf("3");
    }
    //droite
    if (map[l][c + 1] != '\0' && map[l][c + 1] == '*') {
        result += 1;
	//	printf("4");
    }
    //haut gauche
    if (l - 1 > -1 && c - 1 > -1 && map[l - 1][c - 1] == '*') {
        result += 1;
	//	printf("5");
    }
    // bas gauche
    if (map[l + 1] != NULL && c - 1 > -1 && map[l + 1][c - 1] == '*') {
        result += 1;
	//	printf("6");
    }
    // haut droit
    if (l - 1 > -1 && map[l][c + 1] != '\0' && map[l - 1][c + 1] == '*') {
        result += 1;
	//	printf("7");
    }
    //bas droit
    if (map[l] + 1 != NULL && map[l][c + 1] != '\0' && map[l + 1][c + 1] == '*') {
        result += 1;
	//	printf("8");
    }
    //    printf("= %d\n", result);
    return (result);
}

char **my_algo(char **map, char **map_s)
{
    int l = 0;
    int c = 0;
    int n = 0;

    while (map[l] != NULL) {
        while (map[l][c] != '\0') {
            if (map_s[l][c] == '*') {
	        if ((n = my_check_other_case(map_s, l, c)) != 2 && n != 3)
	            map[l][c] = ' ';
	    }else if (map_s[l][c] == ' ')
	        if (my_check_other_case(map_s, l, c) == 3)
                    map[l][c] = '*';
	    c += 1;
	}
	l += 1;
	c = 0;
    }
    return (map);;
}

int main(int ac, char **av)
{
    char **map = my_reader(av[1]);
    int ch = 0;
    int i = 0;

    initscr();
    noecho();
    keypad(stdscr, TRUE);
    while (1) {
        clear();
	printw("iteration = [%d]\n\n", i);
	my_putw_arr(map);
        ch = getch();
	map = my_algo(map, my_arrcpy(map));
        refresh();
	i += 1;
    }
    return (0);
}
