#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number
 * of elements each of an inputted byte size.
 * @nmemb: the number of elements.
 * @size: the byte size of each array element.
 *
 * Return: if nnemb = 0, size = 0, or the function fails - NULL.
 * otherwise - a pointer to the allocated memory.
 */

void *_calloc(unsigned int nnemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nnemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nnemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nnemb); index++)
		filler[index] = '\0';

	return (mem);
}
