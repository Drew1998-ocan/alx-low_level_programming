#include "main.h"
/**
 * main - checks the code
 *
 * Return:  Always 0 (on success)
 *
 **/
int main(void)
{
	int n;

	n = 402;
	printf("n = %d\n", n);
	reset_to_98(&n);
	printf("n = %d\n", n);
	return (0);
}
