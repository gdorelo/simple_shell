/**
 * loop - loop.
 * @av: name of the program passed.
 * Return: 0 to EXIT_SUCCESS.
 */
#include "shell.h"
int loop(char *av)
{
	char **pbuffer;
	char **args;
	int num_of_tokens = 0, i, j;
	int *num = &num_of_tokens;
	int process;
	char *strPath;

	while (1)
	{
	if (isatty(STDIN_FILENO))
		prompt();
	  pbuffer = save_buffer();
	  /*printf("Buffer en MAIN = %s Fin de BUFFER\n", *(pbuffer)); */
	  args = split_buffer(*pbuffer, num);
	  /*printf("Numero de tokens = %d\n", num_of_tokens); */
	  strPath = find_path(environ, args);
	  /*printf("PATH EN MAIN %s\n", strPath);*/
	  process = execute(args, av, environ, strPath);
	  /*for (i = 0; i < num_of_tokens; i++) */
	  /*  printf("%s\n ", args[i]); */
	}
	free(*pbuffer);
	return (0);
}
