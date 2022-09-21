#include "main.h"
/**
 * _strcat - this is a function strtcat
 * @dest: first parameter
 * @src: second program
 * Return: a string
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, j;

	while (dest[len])
		len++;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[len] = src[j];
		len +=1;
	}
	dest[len] = '\0';
	return (dest);
}
