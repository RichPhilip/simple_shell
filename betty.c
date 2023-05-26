#include <stdio.h>

#define MAX_VALUE 100

/**
 * add_numbers - Adds two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The sum of @a and @b
 */
int add_numbers(int a, int b)
{
	return (a + b);
}

/**
 * betty - Entry point of the program
 *
 * Return: 0 on success
 */
int betty(void)
{
	int x = 10;
	int y = 20;
	int sum = add_numbers(x, y);

	/* Check if the sum exceeds the maximum value */
	if (sum > MAX_VALUE)
	{

		puts("The sum exceeds the maximum value.");
	}
	else
	{
		/* Print the value of the sum */
		puts("The sum is within the allowed range.");
	}

	return (0);
}
