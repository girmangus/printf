#include "main.h"
char *p_binary(int n);
/**
 * print_b - Print binary
 * @vlist: argument passed to print
 * @result_holder: Host output
 * @o_p: Output position
 *
 * Description: print number
 * Return: 0
 * -----------------------------------------------
 * Authors - Samrawit Bezabih, Girmangus Gebrezgee
 * Project Date - May 13, 2022 - May 18, 2022 
 * -----------------------------------------------
 */
int print_b(va_list vlist, char *result_holder, int o_p)
{
	int x, y = 0;
	char *ptr;

	x = va_arg(vlist, int);
	ptr = p_binary(x);

	for (; ptr[y]; y++, o_p++)
		result_holder[o_p] = ptr[y];
	return (o_p);
}
/**
 * p_binary - Print %
 * @n: number for convert
 *
 * Description: return a binary
 * Return: 0
 */
char *p_binary(int n)
{
	int a, b, count, flag = 0;
	char *point, *zero = "0";

	count = 0;
	if (n == 0)
		return (zero);
	point = (char *)malloc(33);
	if (!point)
		exit(EXIT_FAILURE);
	for (a = 31; a >= 0; a--)
	{
		b = n >> a;
		if (b & 1)
			*(point + count) = 1 + '0';
		else
			*(point + count) = 0 + '0';
		count++;
	}
	*(point + count) = '\0';
	while (point)
	{
		{
			if (*point != '0')
				flag = 1;
			if (flag == 1)
				return (point);
			point++;
		}
	}
	free(point);
	return (point);
}
