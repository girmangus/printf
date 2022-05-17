/**
* s_trlen - String lenght
* @str: Input
*
* Description: Lenght of the string
*
* Return: The lenght
* -----------------------------------------------
* Authors - Samrawit Bezabih, Girmangus Gebrezgee 
* Project Date - May 13, 2022 - May 18, 2022 
* -----------------------------------------------
*/

int s_trlen(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	x++;
	return (x);
}
