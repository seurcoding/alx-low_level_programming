#include "main.h"

/**
 * int _isalpha(int c);
 * Return 1 if the character is lowercase or uppercase.
 */

int _isalpha(int c)

{
	char lower,upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; upper++)
	{
		if (c == lower || c == upper)
			isletter = 1;
	}
}
	return(isletter)
