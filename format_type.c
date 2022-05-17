#include "main.h"
/**
 * format_type - type of function
 * @s: input
 * Description: Function to get the type function
 * Return: type or null
 * Authors -Samrawit Bezabih, Girmangus Gebrezgee 
 */


int (*format_type(char *s))(va_list vlist, char *result_holder, int o_p)
{
	t_f print[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_pe},
		{"i", print_i},
		{"d", print_d},
		{"o", print_o},
		{"b", print_b},
		{"u", print_un},
		{"x", print_hexa},
		{"X", print_HEXA},
		{"p", print_pa},
		{"R", print_rot13},
		{"S", print_S},
		{"r", print_r},
		{"ld", print_d},
		{"li", print_i},
		{"lu", print_un},
		{"lo", print_o},
		{"lx", print_hexa},
		{"lX", print_HEXA},
		{"hd", print_d},
		{"hi", print_i},
		{"hu", print_un},
		{"ho", print_o},
		{"hx", print_hexa},
		{"hX", print_HEXA},
		{NULL, NULL}
	};
	int x;

	x = 0;

	while (print[x].character)
	{
		if (print[x].character[0] == s[0] && s[0] != '\0')
			return (print[x].func);
		x++;
	}
	return (NULL);
}
