#include "main.h"
/**
 * times_table - entry point
 *
 * description : prints
 *
 * Return:0 always for succes operation
 */
void times_table(void)
{
	int m , n , digit;
	
	for (m = 0; m <= 9; m++)
	{
		for(n = 0; n <= 9; n++)
		{
			digit = m * n;
			if (digit < 10)
			{
			_putchar(digit + '0');
			if (n == 9)
				continue;
			_putchar(',');
			_putchar(' ');
			}
			else
			{
				_putchar(digit/10 + '0');
				_putchar(digit%10 + '0');
				if (n == 9)
                                continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
