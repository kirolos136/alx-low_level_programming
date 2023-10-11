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
	char a = 'a';
	do {
		if( a=='q' || a=='e' )
			continue;
		putchar(a);
		a++;
	} while (a != '{');
	putchar('\n');
        return (0);
}
