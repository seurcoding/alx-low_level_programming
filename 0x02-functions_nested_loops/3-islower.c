#include "main.h"

/**
 * islower_checks for lower case
 *
 * @c: the character to check
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)

{
	return (c >= 'a' && c <= 'z');
}
