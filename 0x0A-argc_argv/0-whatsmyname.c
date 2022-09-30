#include <stdio.h>
#include <stdlib.h>
/*
 *main - the main function of the progam, 
 *prints the values of the name of the program
 *
 *@argc: this is the argument count that is entered int o the program
 *@argv: the argument vector
 *
 *return : always 0on success
 */
int main(int argc, char **argv)
{
	while(argc--)
		printf("the value is: %s", *argv++);
	exit(EXIT_SUCCESS);

}
