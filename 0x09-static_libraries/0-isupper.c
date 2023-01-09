#include "main.h"
/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
