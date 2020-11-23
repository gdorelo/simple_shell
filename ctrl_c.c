#include "shell.h"
/**
 * ctrl_c - function to exit when user type ctrl + c.
 * @sign: integer
 * Return: Nothing.
 */
void ctrl_c(int sign)
{
	signal(sign, SIG_IGN);
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "$", 1);
	signal(SIGINT, ctrl_c);
}
