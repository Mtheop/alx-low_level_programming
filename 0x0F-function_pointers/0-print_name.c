/**
 * print_name - prints name
 * @name: pointer to a name
 * @f: function to pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
