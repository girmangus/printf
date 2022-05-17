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
int print_rot13(va_list vlist, char *output_p, int o_p)
{
	int x = 0, y;
	char *pt = va_arg(vlist, char *);
	char alpha[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char rot13[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	if (!pt)
		pt = "(ahyy)";
	while (pt[x])
	{
		y = 0;
		while (alpha[y])
		{
			if (pt[x] == alpha[x])
			{
				output_p[o_p] = rot13[y];
				o_p++;
				break;
			}
			if (pt[x] < 65 || (pt[x] > 90 && pt[x] < 97) || pt[x] > 122)
			{
				output_p[o_p] = pt[x];
				o_p++;
				break;
			}
			y++;
		}
		x++;
	}
	return (o_p);
}
