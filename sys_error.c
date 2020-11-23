#include "shell.h"
/**
 * sys_error - puts in STDOUT the error
 * @argv: double pointer
 * @count: number of times a command was passed
 * @error: exit error.
 * @program: name of the program.
 * Return: Nothing.
 */
void sys_error(char *argv, int count, char *error, char *program)
{
	write(STDERR_FILENO, program, _strlen(program));
	write(STDERR_FILENO, ": ", 2);
	print_int(count);
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, argv, _strlen(argv));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, error, _strlen(error));
	write(STDERR_FILENO, "\n", 1);
}
