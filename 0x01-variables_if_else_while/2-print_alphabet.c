#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Point of Entry
 *
 * Return: 0
 */
int main(void)
{
	char low;

	for (low = 'a'; low<= 'z'; low++)
		putchar(low);
	printf("\n");

	return (0);
}
