#include "shell.h"
/**
 * loop - loop.
 * @program: name of the program.
 * Return: 0 to EXIT_SUCCESS.
 */
int loop(char *program)
{
	char *line = NULL;
	char **args = NULL;
	int status = 1, outstatus = 0, counter = 1;

	while (status)
	{
		if (isatty(STDIN_FILENO))
		prompt();
		/* read the line from the command line */
		line = read_command_line(outstatus);
		/* if a new line is passed to the command line */
		if (line == NULL)
		continue;
		/* check if there is any spaces at the beginning of the line */
		line = checkspaces(line);
		if (line == NULL)
		continue;
		/* check just the word exit with the last status */
		basic_exit(line, outstatus);
		/* split the command line in separate arguments */
		args = splitline(line);
		/* check if the command is "env" and print env */
		if (_env(args[0], args))
		continue;
		/* execute the command passed */
		outstatus = execute(args, counter, program);
		counter++;
	}
	return (outstatus);
}
