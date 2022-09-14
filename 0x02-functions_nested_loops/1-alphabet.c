#include "main.h"
/**
 * main - Start Point
 *print_alphabet - code to print alphabet
 *
 * Description - print_alphabet - function to print abcd
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
