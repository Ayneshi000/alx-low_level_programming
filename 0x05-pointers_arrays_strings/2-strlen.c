#include "main.h"

/**
 * _strlen function returns the length of a string
 * @s: pointer to string
 * 
 * Return: the function return intger value
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;

	}

	return (i);
}
