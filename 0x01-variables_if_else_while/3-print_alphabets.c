#include <stdio.h>
/**
 * main - Enrty point
 *
 * Return : Always 0 (success)
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
