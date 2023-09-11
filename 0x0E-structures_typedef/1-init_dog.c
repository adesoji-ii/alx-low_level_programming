#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = strdup(name);
	if (d->name == NULL) {

	}

	d->age = age;

	d->owner = strdup(owner);
	if (d->owner == NULL) {

	}
}
