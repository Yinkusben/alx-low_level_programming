#include "function_pointers.h"

/**
 * print_name - a funtion that prints name
 * @name: the name to print
 * @f: the function pointer to the meethod to use in
 * printing the name
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
