#include "main.h"

/**
 * _isupper - main function
 * Description: This program checks for uppercase character
 * @c: this is the function's argumument
 * Return: 0;
 */
int _isupper(int c)
{
	if (c >= '65' && c <= '90')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
