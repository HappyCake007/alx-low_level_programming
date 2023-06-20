#include "main.h"

/**
 * _strlen_recursion - Returns the length of a str
 * @s: string to be measured
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int lenth = 0;

	if (*s)
	{
		lenth++;
		lenth += _strlen_recursion(s + 1);
	}

	return (lenth);
}
