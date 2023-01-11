#include "main.h"
#include <stdlib.h>

/**
 * Write a function that creates an array of chars
 * and initializes it with a specific char.
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return ('\0');
	else
	{
		char *array = malloc(size);
		array[0] = c;
		return (array);
	}
}
