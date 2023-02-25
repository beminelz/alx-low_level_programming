#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n:  number of times the character \ shouldbe printed
 */

void print_diagonal(int n)
{
		int i, j;

		if (n > 0)
		{
		for (j = 0; j <= n; j++)
		{
		for (i = 0; i <= j; i++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		if (j == n - 1)
		{
		continue;
		}
		_putchar('\n');
		}
		}
		_putchar('\n');
}
