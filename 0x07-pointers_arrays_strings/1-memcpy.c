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
	unsigned int a:
	{

		for(a = 0; a < n; a++)
		{
			dest[a] = src[a];
		}

		return (dest);
	}
}
