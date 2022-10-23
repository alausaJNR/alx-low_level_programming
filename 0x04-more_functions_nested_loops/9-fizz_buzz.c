#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the numbers from 1 to 100
 * 3 multiples print Fizz
 * 5 multiples print Buzz
 * 3 & 5 multiples print FizzBuzz
 * Return: 0 always
 */
int main(void)
{
	int i;
	char b[] = "Buzz";
	char f[] = "Fizz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("%s ", fb);
		else if (i % 5 == 0)
			printf("%s ", b);
		else if (i % 3 == 0)
			printf("%s ", f);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
