#include "main.h"
/**
* print_s - Print string
* @vlist: arguments passed to print
* @result_holder: Host output
* @o_p: output position
*
* Description: Fuction that print a string
* Return: the int
 * -----------------------------------------------
 * Authors - Samrawit Bezabih, Girmangus Gebrezgee
 * Project Date - May 13, 2022 - May 18, 2022 
 * -----------------------------------------------
*/
int print_s(va_list vlist, char *result_holder, int o_p)
{
    int x = 0;
    char *ptr = va_arg(vlist, char *);

    if (!ptr)
    ptr = "(null)";
    for (; ptr[x]; x++, o_p++)
        result_holder[o_p] = ptr[x];
    return (o_p);
}
