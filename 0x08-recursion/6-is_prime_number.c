#include "main.h"
#include <stdio.h>

int actual_prime(int n, int i);

/**
 * is_prime_number - check integer is a prime number or not
 * @n: input parameter
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - check if a number is a prim
 * @n: input parameter
 * @i: iterator
 *
 * Return: 1 0r 0
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
