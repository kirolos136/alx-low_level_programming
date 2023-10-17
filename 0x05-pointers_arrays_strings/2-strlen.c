#include "main.h"
#include <stdio.h>
/**
 * _strlen - check the code
 * @s : takes a string
 * description : tells the string length
 * Return: length of string.
 */

int _strlen(char *s)
{
	int i = 0;

	while(*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
