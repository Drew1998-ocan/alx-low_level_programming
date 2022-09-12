#include <stdio.h>
/**
 * main -  Prints the alphabet in lowercase, then in uppercase.
 *
 * Return : 0 on success
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
