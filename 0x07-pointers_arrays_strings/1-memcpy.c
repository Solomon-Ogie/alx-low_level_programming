#include "main.h"

/**
 * *_memcpy - copy memory area
 * @dest: dest memory area
 * @src: source mem area
 * @n: bytes to be copied from mem area
 *
 * Return: Mem area replaced
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
