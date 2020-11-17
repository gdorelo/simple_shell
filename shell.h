#ifndef _SHELL_H_
#define _SHELL_H_
#include "shell.h"
#include <string.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#define BUFFSIZE 512
extern char **environ;
int loop(char *);
void prompt(void);
char **save_buffer(void);
char **split_buffer(char *pbuffer, int *num);
int execute(char *args[], char *av, char **env_var, char * path);
char *find_path(char ** environ, char ** args);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *split_path(char *path, char **args);
char *_strcat(char *dest, char *src);extern char **environ;
#endif