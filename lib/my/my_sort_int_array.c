/*
** EPITECH PROJECT, 2020
** my_sort_int_array
** File description:
** swap 2 array
*/

#include <unistd.h>

void my_swap(int *a, int *b);

void swap2(int *nb1, int *nb2)
{
    if (*nb1 > *nb2)
        my_swap(nb1, nb2);
}

void my_sort_int_array(int *array, int size)
{
    int count = 0;
    int count_bis = 0;

    while (count < size) {
        while (count_bis < size - (1 - count)) {
            swap2(&array[count_bis], &array[count_bis + 1]);
            count_bis++;
        }
        count++;
    }
}
