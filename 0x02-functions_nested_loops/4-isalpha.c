#include "main.h"

/**
 * is_alpha - function to check if c is uppercase or lowercase letter
 *  @c: argument of the function
 *  Return: 0
 */
int is_alpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
