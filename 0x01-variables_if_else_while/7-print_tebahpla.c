#include <stdio.h>
/**
 * main - prints the alphabet in reverse
 *
 * Return: 0 on success
 **/
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
