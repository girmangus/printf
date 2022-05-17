#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{


	int alen, elen;
	printf("=====================\n");
	printf("*****PERCENT*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %%\n");
	alen = _printf("Actual     : %%\n");
	printf("Expected   : %i\n", alen);
	_printf("Actual     : %i\n", elen);
	elen = printf("Expected   : %%%%\n");
	alen = _printf("Actual     : %%%%\n");
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   :");
	printf("%");
	printf("\n");
	printf("Actual     :");
	_printf("%");
	printf("\n");
	return (0);
}
