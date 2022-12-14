#include <stdio.h>
#include "main.h"

void
print_to_98(int n)
{
	int i =n;
	
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
