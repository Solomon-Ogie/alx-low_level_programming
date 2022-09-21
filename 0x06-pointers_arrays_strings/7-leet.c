#include "main.h"

/**
 * leet - Encode a string to 1337
 * @str:  The string to be encoded
 *
 * Return: A pointer to the encoded string
 */

char *leet(char *str)
{
	int inds1 = 0, inds2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[inds1])
	{
		for (inds2 = 0; inds2 <= 7; inds2++)
		{
			if (str[inds1 == leet[inds2] ||
					str[inds1] - 32 == leet[inds2])
				str[inds1] = inds2 + '0';
		}

		inds1++;
	}

	return (str);
}
