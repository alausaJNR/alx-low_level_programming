#include "main.h"

/**
 * _isdigit - This shows whether a given input is a digit or not
 * @c: input
 * Return: 1 if positive and 0 if otherwise
 */
int _isdigit(int c)
{
	if ((c <= 57) && (c >= 48))
		return (1);
	else
		return (0);
}
