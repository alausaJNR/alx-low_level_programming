#include "main.h"

/**
 * print_square - function that print a squrae followed by a new line
 * @size: input
 * Return: using # to print a square
 */
void print_square(int size)
{
	int i, x;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
			for (x = 2; x <= size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}


