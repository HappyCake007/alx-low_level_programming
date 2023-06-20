#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - use recursion to print a string character by character
 * @s: input parameter
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
