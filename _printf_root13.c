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
	int i, j;
	char alphabet[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char rAlphbet[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	char *s;

	s = va_arg(vlist, char *);
	if (!s)
		s = "(null)";
	for (i = 0; s[i]; ++i)
	{
		for (j = 0; alphabet[j]; ++j)
		{
			if (alphabet[j] == s[i])
			{
				result_holder[o_p] = rAlphbet[j];
				o_p++;
				break;
			}
		}
		if (!alphabet[j]){
			result_holder[o_p] = s[i];
			o_p++;
			break;
		}
	}
	
	return (o_p);
}
