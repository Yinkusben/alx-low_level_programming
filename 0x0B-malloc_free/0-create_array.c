#include <stdlib.h>
#include "main.h"

/**
 * Write a function that creates an array of chars
 * and initializes it with a specific char.
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *p;

	p = (char *) malloc(size);

	int i;

	for (i = 0; i < size; i++)
		{
			p[i] = c;
		}

	return (p);
}
