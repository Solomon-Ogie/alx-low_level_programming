#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a straight line
 * @z: parameter
 * Return:returns null
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
