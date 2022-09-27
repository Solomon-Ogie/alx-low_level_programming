#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: dest memory area
 * @src: source mem area
 * @n: bytes to be copied from mem area
 *
 * Return: Mem area replaced
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n < 0; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
