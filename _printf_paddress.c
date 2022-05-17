#include "main.h"
/**
* print_pa - Print address
* @vlist: arguments passed to print
* @result_holder: Host output
* @o_p: output position
*
* Description: Fuction that print the address
* Return: the int
 * -----------------------------------------------
 * Authors - Samrawit Bezabih, Girmangus Gebrezgee
 * Project Date - May 13, 2022 - May 18, 2022 
 * -----------------------------------------------
*/
int print_pa(va_list vlist, char *result_holder, int o_p)
{
	void *addr;
	unsigned long int decimal, result, x, y = 0;
	char hexa[100];
	char *s = "(nil)";

	addr = va_arg(vlist, void *);
	decimal = (unsigned long int)addr;
	if (decimal == 0)
	{
		for (y = 0; s[y]; y++, o_p++)
			result_holder[o_p] = s[y];
		return (o_p);

	}
	while (decimal)
	{
		result = decimal % 16;
		if (result < 10)
			hexa[y++] = 48 + result;
		else
			hexa[y++] = 87 + result;
		decimal = decimal / 16;
	}
	result_holder[o_p] = 48;
	o_p++;
	result_holder[o_p] = 120;
	o_p++;
	for (x = y; x > 0; x--, o_p++)
		result_holder[o_p] = hexa[x - 1];
	return (o_p);
}
