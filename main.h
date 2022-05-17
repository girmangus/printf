#ifndef MAIN_H
#define MAIN_H

#define SIZE 2048

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

/**
 * struct t_format - Struct t_format
 *
 * @character: the class
 * @func: pointer to a function
 *
 * Description: the structure for the format type
 * -----------------------------------------------
 * Authors - Samrawit Bezabih, Girmangus Gebrezgee
 * Project Date - May 13, 2022 - May 18, 2022 
 * -----------------------------------------------
 */
typedef struct t_format
{
    char *character;
    int (*func)(va_list vlist, char *result_holder, int o_p);
} t_f;



int _printf(const char *format, ...);
int (*format_type(char *s))(va_list vlist, char *result_holder, int o_p);
int print_c(va_list vlist, char *result_holder, int o_p);
int s_trlen(char *str);
int print_s(va_list vlist, char *result_holder, int o_p);
int print_pe(va_list vlist, char *result_holder, int o_p);
int print_n(int n, char *result_holder, int o_p);
int print_d(va_list vlist, char *result_holder, int o_p);
int print_i(va_list vlist, char *result_holder, int o_p);
int print_o(va_list vlist, char *result_holder, int o_p);
int print_b(va_list vlist, char *result_holder, int o_p);
int print_un(va_list vlist, char *result_holder, int o_p);
int print_hexa(va_list vlist, char *result_holder, int o_p);
int print_HEXA(va_list vlist, char *output_o, int o_p);
int print_HEXA_S(char s, char *result_holder, int o_p);
int print_pa(va_list vlist, char *result_holder, int o_p);
int print_rot13(va_list vlist, char *result_holder, int o_p);
int print_S(va_list vlist, char *result_holder, int o_p);


char *convert(unsigned long int num, int base, int lowercase);

#endif
