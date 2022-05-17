#include "main.h"
/**
* print_pe - Print %
* @vlist: arguments passed to print
* @result_holder: Host output
* @o_p: output position
*
* Description: Fuction that print %
* Return: the int
 * -----------------------------------------------
 * Authors - Samrawit Bezabih, Girmangus Gebrezgee
 * Project Date - May 13, 2022 - May 18, 2022 
 * -----------------------------------------------
*/
int print_pe(va_list vlist, char *result_holder, int o_p)
{
(void) vlist;
result_holder[o_p] = '%';
return (++o_p);
}
