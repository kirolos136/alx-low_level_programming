#include <stdio.h>

/**
 * main - this is practicing for first time
 *
 * description : printing a string
 *
 * Return:0 always for succes operation
 */


int main(void)
{
	char m = 'a';

	do {
		putchar(m);
		m++;
	} while (m != '{');
	putchar('\n');
	return (0);
}
