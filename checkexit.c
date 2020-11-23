#include "shell.h"
/**
 * checkspaces - function to check if extra spaces are passed
 * @line: Pointer to string.
 * Return: null or a string without extra spaces.
 */
char *checkspaces(char *line)
{
	int i = 0;
	char *new;

	while (line[i] != '\0')
	{
		if (line[i] != ' ')
		{
		new = _strdup(line + i);
		free(line);
		return (new);
		}
		i++;
	}
	free(line);
	return (NULL);
}
/**
 * basic_exit - function to check a string for the word exit
 * @arg: Pointer to string.
 * @status: status to exit
 * Return: 0 if the match is NOT success else exit.
 */
int basic_exit(char *arg, int status)
{
	int len;

	if (!arg)
		return (0);
	len = _strlen(arg);
	if (len == 4)
		if (arg)
		if (!_strncmp("exit", arg, 4))
		{
			free(arg);
			exit(status);
		}
	return (0);
}
/**
 * _env - function to check if "env" was passed and print environ if it was
 * @arg: Pointer to string.
 * @args: double pointer to be freed
 * Return: 1 if the match is success else 0.
 */
int _env(char *arg, char **args)
{
	int len;

	len = _strlen(arg);
	if (len == 3)
		if ((_strncmp("env", arg, 3)) == 0)
		{
		print_environ();
		free(arg);
		free(args);
		return (1);
		}
	return (0);
}
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
