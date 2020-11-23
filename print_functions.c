#include "shell.h"
/**
 * _puts - function to print a string
 * @str: variable
 * Return: no return
 */
void _puts(char *str)
{
	int a = 0;

	for ( ; *(str + a) != '\0' ; a++)
		_putchar(*(str + a));
}
/**
 * prompt - Prints the prompt line.
 * Return: No return.
 */
void prompt(void)
{
	_puts("#$ ");
}
/**
 * print_environ - function that prints the system enviroment.
 * Return: nothing.
 */
void print_environ(void)
{
	int i = 0;
	char **env = environ;

	while (env[i])
	{
		_puts(env[i]);
		_putchar(10);
		i++;
	}
}
/**
 * print_int - print integer.
 * @n: the integer.
 */
void print_int(int n)
{
	unsigned int i;
	unsigned int p;
	unsigned int *ptr = &p;

	if (n < 0)
	{
		write(STDERR_FILENO, "-", 1);
		i = n * -1;
	}
	else
		i = n;
	if (n / 10 != 0)
		print_int(i / 10);
	p = i % 10 + 48;
	write(STDERR_FILENO, ptr, 1);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
