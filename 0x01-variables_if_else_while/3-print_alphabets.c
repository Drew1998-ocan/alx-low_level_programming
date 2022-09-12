#include <stdio.h>
/**
 * main - prints all possible combinations of single digit numbers.
 *
 * Return: 0 on success
 **/
int main(void)
{
	char m = 'a';
	char n = 'A';

	while (m <= 'z')
	{
		putchar(m);
		m++;
	}
	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
