#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string (Success), NULL (Failure)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	dup = malloc(len + 1);
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}

/**
 * new_dog - creates a new dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: pointer to the new dog (Success), NULL (Failure)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	new_name = _strdup(name);
	if (new_name == NULL)
	{
		free(dog);
		return (NULL);
	}

	new_owner = _strdup(owner);
	if (new_owner == NULL)
	{
		free(new_name);
		free(dog);
		return (NULL);
	}

	dog->name = new_name;
	dog->age = age;
	dog->owner = new_owner;

	return (dog);
}
