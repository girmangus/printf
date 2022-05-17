#include "main.h"
/**
 * print_n - prints integer
 * @result_holder: Host output
 * @o_p: output position
 * @n: int
 *
 * Description: Function that print a char
 * Return: int
 * -----------------------------------------------
 * Authors - Samrawit Bezabih, Girmangus Gebrezgee
 * Project Date - May 13, 2022 - May 18, 2022 
 * -----------------------------------------------
 */
int print_n(int n, char *result_holder, int o_p)
{
	int x = 1, y = 0, z;

	if (n < 0)
	{
		result_holder[o_p] = '-';
		o_p++;
	}
	while (n / x > 9 || n / x < -9)
	{
		x = x * 10;
		y++;
	}
	for (z = 0; z <= y; z++)
	{
		if (n < 0)
		{
			result_holder[o_p] = (-(n / x) + '0');
		}
		else
		{
			result_holder[o_p] = ((n / x) + '0');
		}
		o_p++;
		n = n % x;
		x = x / 10;
	}
	return (o_p);
}
/**
 * print_int - prints specifier d
 * @vlist: arguments passed to print
 * @result_holder: Host output
 * @o_p: output position
 *
 * Return: int
 * -----------------------------------------------
 * Authors - Samrawit Bezabih, Girmangus Gebrezgee
 * Project Date - May 13, 2022 - May 18, 2022 
 * -----------------------------------------------
 */
int print_d(va_list vlist, char *result_holder, int o_p)
{
	return (print_n(va_arg(vlist, int), result_holder, o_p));
}
/**
 * print_single_int - print specifier i
 * @vlist: arguments passed to print
 * @result_holder: Host output
 * @o_p: output position
 *
 * Return: int
 * -----------------------------------------------
 * Authors - Samrawit Bezabih, Girmangus Gebrezgee
 * Project Date - May 13, 2022 - May 18, 2022 
 * -----------------------------------------------
 */
int print_i(va_list vlist, char *result_holder, int o_p)
{
	return (print_n(va_arg(vlist, int), result_holder, o_p));
}
