#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - is a function that allocates mem
 * @b: The size of memory to be allocated
 *
 * Return: pointer to the memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit (98);

	return (ptr);
}
