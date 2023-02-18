#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Programs that prints single digit base 0 to 10
 * Return: 0 (Success)
 */

int main(void)

{

	int d;

	for (d = '0'; d <= '9'; d++)
	putchar(d);
	putchar("\n");

	return (0);

}
