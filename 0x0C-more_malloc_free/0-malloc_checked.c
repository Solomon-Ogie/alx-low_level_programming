#include "main.h"

/**
 *malloc_checked - array that prints a string
 * @b: num of memory
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98)
	}

	return (p);
}
