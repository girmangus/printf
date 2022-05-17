#include "main.h"
/**
 * print_rot13 - Print rot13
 * @vlist: arguments passed to print
 * @result_holder: Host output
 * @o_p: output position
 *
 * Description: Fuction that print rot13
 * Return: the int
 * -----------------------------------------------
 * Authors - Samrawit Bezabih, Girmangus Gebrezgee
 * Project Date - May 13, 2022 - May 18, 2022 
 * -----------------------------------------------
 */
int print_rot13(va_list vlist, char *result_holder, int o_p)
{
	int x = 0, y, i;
	char *pt = va_arg(vlist, char *);
	char alphabet[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char rAlphbet[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	if (!pt)
		pt = "(null)";
	for (i = 0; pt[i]; ++i)
	{
		for (y = 0; alphabet[y]; ++y)
		{
			if (alphabet[y] == pt[i])
			{
				result_holder[o_p] = rAlphbet[y];
				o_p++;
				break;
			}
		}
		if (!alphabet[y]){
			result_holder[o_p] = pt[x];
				o_p++;
				break;
		}
	}
	
	return (o_p);

}
