#include "main.h"
/**
 * _puts - function that prints a string followed by a new line
 *
 * @str : variable with the data type char
 *
 *
**/
void _puts(char *str)
{
	int i;

	i = 0;
	while (i !=  '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
