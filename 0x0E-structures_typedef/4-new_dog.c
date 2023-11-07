#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new created dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer of dog
 *
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	size_t n, x, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (n = 0; name[n] != '\0'; n++)
		;
	n++;
	dog->name = malloc(sizeof(char) * n);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (x = 0; owner[x] != '\0'; x++)
		;
	x++;
	dog->owner = malloc(sizeof(char) * x);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < x; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
