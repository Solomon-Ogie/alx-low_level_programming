#include "main.h"

/**
 * _isdigit - checks if the character is a digit or not
 * @n: tests character
 * Return: 1 if it is and 0 if otherwise
 */

int _isdigit(int n)
{

	if ((n >= 48) && (n <= 57))
	{
		return (1);
	}

	return (0);
}
