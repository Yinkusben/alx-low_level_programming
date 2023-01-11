#include <stdlib.h>
#include "main.h"

/**
 * *create_array - create array of characters
 * and initializes it with a specific char.
 * @size: size of array to be created
 * @c: the character to initialize the array with
 *
 * Return: pointer to the array (success), NULL (error)
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
