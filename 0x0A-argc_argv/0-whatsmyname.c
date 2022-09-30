#include <stdio.h>
#include <stdlib.h>
#include <main.h>
/**
 *main - prints the name of the program,
 *prints the values of the name of the program
 *
 *@argc: this is the argument count that is entered int o the program
 *@argv: the argument vector
 *
 *return : always 0on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("the name of the program is: %s\n", argv[0]);
	}
	return (0);
}
