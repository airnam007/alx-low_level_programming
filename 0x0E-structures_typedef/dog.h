#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a basic info on dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * Description: longer description for struct dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t typedef for struct dog
 */

typedef strcut dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
