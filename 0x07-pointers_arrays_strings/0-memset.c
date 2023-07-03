#include "main.h"

/**
 * _memset - function fills the memory with const byte
 * @s: pointer to memory locations
 * @b: const byte
 * @n: number of memory areas
 * Return: char to the value of memset.
 */

char *_memset(char *s, char b, unsigned int n)
{        
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b ;
	}		
        
	return (s);
}		
