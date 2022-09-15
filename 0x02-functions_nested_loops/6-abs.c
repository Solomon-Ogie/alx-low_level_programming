#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _abs - function that computes the absolute value of an integer
 * @c: is the int that will serve as function argument
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
