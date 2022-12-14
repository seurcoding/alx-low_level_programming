#include <stdio.h>
#include "main.h"

/**
 * Function that print all natural number from n to 98
 * followed by \n
 *
 * Return: 0(Always success)
 */
void
print_to_98(int n)
{
	int i;
	
	if (i >= 98)
	{
		for (i = n; i >= 98; i--)
		{
		if (i != 98)
			printf("%d, ", i);
		else printf("%d, ", i);
		}
	}
	else
	{
		for (i = 0; i <= 98; i++)
		{
		if (i != 98)
			printf("%d, ", i);
		else printf("%d, ", i);
		}
	}

	_putchar('\n');
}
