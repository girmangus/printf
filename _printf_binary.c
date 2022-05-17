#include "main.h"
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
	unsigned int n;
	int y = 0;
	char *ptr;

	n = va_arg(vlist, unsigned int);
	ptr = convert(n, 2,1);

	if (!n){
		result_holder[o_p++] = '0';
	}
	for (; ptr[y]; y++, o_p++)
		result_holder[o_p] = ptr[y];
	return (o_p);
}

/**
 * convert - function that converts our int to hex, octal, or binary
 * @num: the number passed into the function
 * @base: the base to convert to
 *
 * Return: the convertednumber of a certain base
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	static char buffer[50];
	char *ptr;
	static char *Rep;
	if(lowercase == 1)
		 Rep  = "0123456789abcdef";
	else
		Rep = "0123456789ABCDEF";

	ptr = &buffer[49];
	*ptr = '\0';

	while (num != 0)
	{
		*--ptr = Rep[num % base];
		num /= base;
	}

	return (ptr);
}