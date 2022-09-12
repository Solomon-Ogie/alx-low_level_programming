#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Start point
 *
 * Return: 0
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++ "\n")

	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
