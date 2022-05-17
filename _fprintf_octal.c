#include "main.h"
/**
* print_o - Print octal
* @vlist: arguments passed to print
* @result_holder: Host output
* @o_p: output position
*
* Description: Fuction that print octal
* Return: the int
 * -----------------------------------------------
 * Authors - Samrawit Bezabih, Girmangus Gebrezgee
 * Project Date - May 13, 2022 - May 18, 2022 
 * -----------------------------------------------
*/
int print_o(va_list vlist, char *result_holder, int o_p)
{
	unsigned int decimal, result;
	int x, y = 0;
	char octal[100];

	decimal = va_arg(vlist, unsigned int);
	if (decimal == 0)
		octal[y++] = 48;
	while (decimal)
	{
		result = decimal % 8;
		if (result < 8)
			octal[y++] = 48 + result;
		decimal = decimal / 8;
	}
	for (x = y; x > 0; x--, o_p++)
		result_holder[o_p] = octal[x - 1];
	return (o_p);
}
