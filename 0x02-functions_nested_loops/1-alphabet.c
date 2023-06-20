#include "main.h"
/**
 * print_alphabet - prints the english alphabet from a-z.
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char count;

	for (count = 'a'; count <= 'z'; count++)
        { 
                    _putchar(count);
	}      
	_putchar('\n');
}
