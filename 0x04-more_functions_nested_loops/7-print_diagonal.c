
Product
Solutions
Open Source
Pricing
Search
Sign in
Sign up
michaelEmeka
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x04-more_functions_nested_loops/7-print_diagonal.c
@michaelEmeka
michaelEmeka Modify 7
Latest commit dc6749c on Jul 18, 2022
 History
 1 contributor
29 lines (27 sloc)  403 Bytes

#include "main.h"

/**
 * print_diagonal - main function
 * @n: this is the function's argument
 * Description: this program draws a diagonal line on the terminal
 * Return: nil
 */
void print_diagonal(int n)
{
	int s = n, c;

	if (n > 0)
	{
		while (n--)
		{
			for (c = 0; c < s - (n + 1); c++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
