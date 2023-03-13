#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *_strdup - duplicates string
 *@str: string to duplicate
 *Return: pointed to duped string
 *
 */

char *_strdup(char *str)
{
	char *a;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	a = malloc((i + 1) * sizeof(*a));

	if (a == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		a[j] = str[j];

	a[j] = '\0';

	return (a);
}

