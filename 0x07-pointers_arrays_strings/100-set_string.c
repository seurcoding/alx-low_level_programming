#include "main.h"
#include <stdio.h>

/**
 * 
 *
 * set_string - set value of a pointer to a char
 * @s: pointer to pointer to set
 * @to: point to set the pointer pointed to by s to
 */
void set_string(char **s, char *to) 
{
  *s = to;
}

