#include "main.h"

/**
 * strlen - length of a string
 * @s: a pointer to an int that will be changed/updated
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
