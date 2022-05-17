#include "main.h"
/**
 * print_c - prints a char
 * @vlist: arguments passed to print
 * @result_holder: Host output
 * @o_p: output position
 *
 * Description: Function that print a char
 * Return: int
 * -----------------------------------------------
 * Authors - Samrawit Bezabih, Girmangus Gebrezgee
 * Project Date - May 13, 2022 - May 18, 2022 
 * -----------------------------------------------
 */
int print_c(va_list vlist, char *result_holder, int o_p)
{
	result_holder[o_p] = va_arg(vlist, int);
	return (++o_p);
}
