#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: a program that prints all single
 * digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
    char c = '0';

    while (c <= '9')
    {
        putchar(c);
        c++;
    }

    putchar('\n');
    return (0);
}
