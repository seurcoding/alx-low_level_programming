#include "main.h"

/**
 * int _isalpha(int c);
 *
 * Return 1 if char letter is lower or upper,0 otherwise
 */

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
