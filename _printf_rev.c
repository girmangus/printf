#include "main.h"

/**
 * print_r - prints a string in reverse
 * @l: argument from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: length of the printed string
 * -----------------------------------------------
 * Authors - Samrawit Bezabih, Girmangus Gebrezgee
 * Project Date - May 13, 2022 - May 18, 2022 
 * -----------------------------------------------
 */

int print_r(va_list vlist, char *result_holder, int o_p)
{
	register short len = 0, j;
	char *s; 

	s = va_arg(vlist, char *);

	if (!s)
		s = "(null)";
	while (s[len])
		len++;
	for (j = len - 1; j >= 0; j--){
		result_holder[o_p] = s[j];
		o_p++;
	}
	return (o_p);
}