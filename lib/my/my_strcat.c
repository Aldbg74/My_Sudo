/*
** EPITECH PROJECT, 2024
** omar
** File description:
** my_strcat.c
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int a = my_strlen(dest);

    for (int i = 0; src[i] != '\0'; i++){
        dest[a] = src[i];
        a++;
    }
    dest[a] = '\0';
    return dest;
}
