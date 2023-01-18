#include "funcrion_pointers.h"

/**
 * array_iterator - A funtion that executes a funcrion
 * given as a parameter on each element of an array
 *
 * @array: The array to iterate
 * @size: The size of the array
 * @action: The funtion to execute over each element
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}
