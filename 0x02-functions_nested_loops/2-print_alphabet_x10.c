#include "main.h"
/**
 * print_alphabet_x10 - this is practicing for first time
 *
 * description : printing a string
 *
 * Return:0 always for succes operation
 */


void print_alphabet_x10(void)
{
	int times = 0;
	char a = 'a';

	while (times < 9)
	{
		while (a < '{')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
