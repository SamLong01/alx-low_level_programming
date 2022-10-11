#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new data type containing name, age and owner
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif
