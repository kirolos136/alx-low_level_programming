#include "main.h"

/**
 * print_last_digit - entry point
 * @n :req integer
 * description : prints last digit
 *
 * Return:0 always for succes operation
 */

int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit > 0)
	{
		_putchar(digit + '0');
		return (digit);
	}
	else if (digit == 0)
	{
		_putchar(digit + '0');
		return (digit);
	}
	else
	{
		digit = digit * -1;
		_putchar(digit + '0');
		return (digit);
	}
}
