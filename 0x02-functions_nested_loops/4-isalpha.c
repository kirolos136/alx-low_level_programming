#include "main.h"

/**
 * _isalpha - this is practicing for first time
 * @c : gives 1 for letters
 * description : check letters
 *
 * Return:0 or 1 for succes operation
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
