/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday09-alexis.drago-beltran
** File description:
** my.h
*/

#ifndef _MY_H_
    #define _MY_H_

    #include <unistd.h>
    #include <stdlib.h>

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_compute_factorial_rec(int nb);
int my_compute_factorial_it(int nb);
int my_compute_power_it(int nb, int p);
int my_strlen(char const *str);
char *my_revstr(char *dest, char const *src);
int my_printf(const char *format, ...);
int my_isnum(int i);
int my_printf(const char *format, ...);
int my_intlen(int value);
int mini_printf(const char *format, ...);
char *my_strdup(char const *src);
char **shadow(long size);
char *fill(char *things);
int last_line(char **tab);
char **my_str_to_word_array(char const *str);


#endif
