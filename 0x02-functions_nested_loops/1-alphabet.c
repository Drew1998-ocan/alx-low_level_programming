#include "main.h"
/**
 * main - This code prints _putchar
 * 
 * Return: 0 on success
 */
void print_alphabet(void)
{
	char c;

	for (c= 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

