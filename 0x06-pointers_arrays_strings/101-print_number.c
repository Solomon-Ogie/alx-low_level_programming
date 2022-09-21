#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: the integer to be printed.
 *
 * Return: 0
 */

void print_number(int n)
{
	int power, peg, riff;

	peg = 0;
	power = 1;
	riff = n;
	if (n < 0)
	{
		_putchar('-');
		peg = 1;
	}

	while (riff > 9 || hold < -9)
	{
		power *= 10;
		riff /= 10;
	}

	while (power > 0)
	{
		if (power > 9)
		{
			if (peg)
				_putchar((n / power % 10) + '0');
			else
				_putchar((n / power % 10) * -1 + '0');

			power /= 10;
		}
		if (power == 1)
		{
			if (peg)
				_putchar((n % 10) * -1 + '0');
			else
				_putchar(n % 10 + '0');
			power = 0;
		}
	}
}
