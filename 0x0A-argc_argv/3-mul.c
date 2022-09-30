#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiplication of two integers
 * @argc: Counts the argument
 * @argv: argument vector
 *
 * Return: 0 (true) 1 (false)
 */

int main(int argc, char *argv[])
{
	int a, b;
	if (argc == 1)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a *b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
