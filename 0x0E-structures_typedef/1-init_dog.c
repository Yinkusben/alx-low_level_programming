#include "dog.h"

/**
 * init_dog - funtion that initializes a variable of
 * type - struct dot
 *
 * @d: pointer to the variable to initialize
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
