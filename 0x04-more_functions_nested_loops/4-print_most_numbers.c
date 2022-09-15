#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 *
 * Return: returns null
 */

void print_most_numbers(void)
{
	int z;

	for (z = 48; n < 58; n++)
	{
		if ((z == 50) || (z == 52))
		{
			continue;
		}
		putchar(z);
	}
	putchar(10);
}
