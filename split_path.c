#include "shell.h"
/**
 * split_path - function to split the path
 * @path: path to the command
 * @args: program and arguments passed
 * Return:  the path with the command in a string.
 */
char *split_path(char *path, char **args)
{
	char *folder = NULL;
	struct stat fileStat;    
	folder = strtok(path, ":");    
	char *command = malloc(sizeof(char) * _strlen(args[0]) + _strlen(folder));
	if (!command)
		return (NULL);    
	while (folder != NULL)
	{
		command[0] = '\0';
		command = _strcat(command, folder);
		command = _strcat(command, "/");
		command = _strcat(command, args[0]);
		/*printf("COMMAND 0 : %s\n", command);*/
		if (stat(command, &fileStat) == 0)
			return (command);        
		folder = strtok(NULL, ":"); 
	}
	return (NULL);
}