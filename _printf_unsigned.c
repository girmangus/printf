#include "main.h"
/**
 * print_un - prints a unsigned num
 * @vlist: arguments passed to print
 * @result_holder: host output
 * @o_p: output position
 *
 * Description: Function that print a char
 * Return: int
 * -----------------------------------------------
 * Authors - Samrawit Bezabih, Girmangus Gebrezgee
 * Project Date - May 13, 2022 - May 18, 2022 
 * -----------------------------------------------
 */
int print_un(va_list vlist, char *result_holder, int o_p)
{
	long int a = 1, x = 0, y, n = 0, m = 0, aux = 4294967296;

	m = va_arg(vlist, int);
	if (m < 0)
		n = aux + m;
	else
		n = m;
	while (n / a > 9)
	{
		a = a * 10;
		x++;
	}
	for (y = 0; y <= x; y++, o_p++)
	{
		result_holder[o_p] = ((n / a) + '0');
		n = n % a;
		a = a / 10;
	}
	return (o_p);
}
