#include "main.h"
/**
* print_hexa - Print hexadecimal
* @vlist: arguments passed to print
* @result_holder: Host output
* @o_p: output position
*
* Description: Fuction that print hexa
* Return: the int
 * -----------------------------------------------
 * Authors - Samrawit Bezabih, Girmangus Gebrezgee
 * Project Date - May 13, 2022 - May 18, 2022 
 * -----------------------------------------------
*/
int print_hexa(va_list vlist, char *result_holder, int o_p)
{
unsigned int decimal, result;
int x, y = 0;
char hexa[100];
decimal = va_arg(vlist, unsigned int);
if (decimal == 0)
	hexa[y++] = 48;
while (decimal)
{
	result = decimal % 16;
	if (result < 10)
		hexa[y++] = 48 + result;
	else
		hexa[y++] = 87 + result;
	decimal = decimal / 16;
}
for (x = y; x > 0; x--, o_p++)
	result_holder[o_p] = hexa[x - 1];
return (o_p);
}
