#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @str1: first string
 * @str2: second string
 * Return:
 *      returns zero if str1 == str2
 *      returns negative number  if str1 < str2
 *      returns positive number if str1 > str2
 */

int _strcmp(char *str1, char *str2)
{
	while (*str1 && *str2 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
