#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *		using two input parameters
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int a_initial = *a;
	int b_initial = *b;

	*a = b_initial;
	*b = a_initial;
}
