#include "main.h"
/**
 * _printf - Print all this parameters
 * @format: input
 *
 * Description: function that prints output
 *
 * Return: The output character or num
 * -----------------------------------------------
 * Authors - Samrawit Bezabih, Girmangus Gebrezgee
 * Project Date - May 13, 2022 - May 18, 2022 
 * -----------------------------------------------
 **/

int _printf(const char *format, ...)
{
	int x = 0, o_p = 0;
	char *ptr = (char *) format, *result_holder;
	int (*ptr_func)(va_list, char *, int);
	va_list vlist;

	if (!format)
		return (-1);
	va_start(vlist, format);
	result_holder = malloc(sizeof(char) * SIZE);
	if (!result_holder)
		return (1);
	while (format[x])
	{
		if (format[x] != '%')
			result_holder[o_p] = format[x], o_p++;
		else if (s_trlen(ptr) != 1)
		{
			ptr_func = format_type(++ptr);
			if (!ptr_func)
				result_holder[o_p] = format[x], o_p++;
			else
				o_p = ptr_func(vlist, result_holder, o_p), x++;
		}
		else
			o_p = -1;
		x++, ptr++;
	}
	va_end(vlist);
	write(1, result_holder, o_p);
	free(result_holder);
	return (o_p);
}
