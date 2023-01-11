#include <stdlib.h>
#include "main.h"

/**
 * Write a function that creates an array of chars
 * and initializes it with a specific char.
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);


	p = (char *) malloc(size);

	for (i = 0; i < size; i++)
		{
			p[i] = c;
		}

	return (p);
}
