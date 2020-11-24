#include "shell.h"
/**
 * execute - function that executes all arguments passed in command line.
 * @args: Arguments typed into the command line.
 * @counter: counter
 * @program: Name of the program
 * Return: void
 */
int execute(char **args, int counter, char *program)
{
	pid_t pid;
	int status, errorstatus = 0;
	char *command = NULL;

	command = getpath(args[0]);
	if (command == NULL)
	{
		sys_error(args[0], counter, "command not found", program);
		free(args[0]);
		free(args);
		return (127);
	}
	pid = fork();
	if (pid < 0)
		exit(errno);
	else if (pid == 0)
	{
		if (execve(command, args, environ) == -1)
		{
		sys_error(command, counter, "cannot execute", program);
		_free(command, args[0], args);
		exit(errno);
		}
		else
		exit(errno);
	}
	else
	{
		wait(&status);
		if (WIFEXITED(status))
		errorstatus = WEXITSTATUS(status);
	}
	
	if (!_strcmp(command, args[0]))
	{
		free(args[0]);
		free(args);
		return (errorstatus);
	}

	_free(command, args[0], args);
	return (errorstatus);
}
