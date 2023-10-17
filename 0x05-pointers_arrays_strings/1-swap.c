#include "main.h"

/**
 * swap_int - check the code
 * description : swaping values
 * @a: value 1
 * @b : value 2
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
