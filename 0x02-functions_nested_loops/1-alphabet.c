#include "main.h"
/**
 * entry point - print_alphabet
 *
 * Discription: function that prints the alphabet, in lowercas,
 * followed by a new line
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)

{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	_putchar(i);
	}
	_putchar('\n');

}
