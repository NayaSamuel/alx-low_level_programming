#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function to print natural numbers
 * @n: function parameter
 * Return: return always 0
 */

void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	}
	else if (n < 0)
	{
		for (i = n ; i <= 98 ; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	}
	else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	}
	else if (n == 98)
		printf("%d", n);
}
