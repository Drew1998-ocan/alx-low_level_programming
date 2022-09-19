#include <stdio.h>
/**
 * swap_int - sunction that swaps two values
 *
 * @a : first variable
 * @b : second variables
 *
 **/
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;

}
