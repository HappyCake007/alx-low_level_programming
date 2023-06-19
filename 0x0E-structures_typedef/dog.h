#ifndef dog_h
#define dog_h

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog doggie;

/**
 * struct dog - struct that stores some information of a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: struct called dog, that stores dog's name, age
 * and the dog's owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
doggie *new_dog(char *name, float age, char *owner);
void free_dog(doggie *d);

#endif
