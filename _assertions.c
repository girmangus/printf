#include "main.h"

/**
 * invalidInputs - validates user did not enter invalid inputs
 * @p: input string
 * Return: true or false
 * -----------------------------------------------
 * Authors - Samrawit Bezabih, Girmangus Gebrezgee
 * Project Date - May 13, 2022 - May 18, 2022 
 * -----------------------------------------------
 **/

bool invalidInputs(const char *p)
{
	/* NULL */
	if (!p)
		return (false);
	/* "%" */
	if (*p == '%' && !*(p + 1))
		return (false);
	/* "% " */
	if (*p == '%' && *(p + 1) == ' ' && !*(p + 2))
		return (false);
	return (true);
}
