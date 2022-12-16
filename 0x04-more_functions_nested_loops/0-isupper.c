#include <ctype.h>
#include "main.h"

/**
 * _is upper checks for uppercase character
 * @c - the characyer to be checked
 * Returns 1 if c is upoercase, 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
