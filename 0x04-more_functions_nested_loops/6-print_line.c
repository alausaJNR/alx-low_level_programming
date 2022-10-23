#include "main.h"

/**
 * print_line -  function that draws a straight line in the terminal
 * @n: input numberof times to print
 * Return: a straight line given that n is greater than 0
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i >= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
