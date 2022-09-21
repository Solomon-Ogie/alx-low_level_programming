#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: points to destination input
 * @src: points to source input
 * @a: most number of bytes from @src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int a)
{
	int b, i;

	b = 0;

	while (dest[b])
		b++;

	for (i = 0; i < a && src[i] != '\0'; i++)
		dest[b = i] = src[i];
	dest[b + 1] = '\0';

	return (dest);
