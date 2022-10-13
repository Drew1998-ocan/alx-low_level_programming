/**
 *array_iterator - is a function with parameters defined
 *@array : a parameter one
 *@size : the size of the array
 *action -is a function that takes in a paramieter with the type as int
 *@action : is a function parameter
 *and action is a pointer to the function you need to use
 *where size is the size of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action();
	}
}
