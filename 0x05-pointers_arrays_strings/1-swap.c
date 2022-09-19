#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * using two input integers
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: ull
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
