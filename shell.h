#ifndef _SHELL_H_
#define _SHELL_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/stat.h>
#include <errno.h>
#define BUFFERSIZE 512
extern char **environ;
int loop(char *program);
char *read_command_line(int status);
char **splitline(char *buffer);
int execute(char **args, int counter, char *program);
char *_getenv(char *path);
char **splitpath(char *path);
char *getpath(char *command);
char *_strtok(char *arg, char *delimiter);
int _strncmp(char *s1, char *s2, int len);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
void prompt(void);
int _putchar(char c);
void _puts(char *str);
void print_environ(void);
void print_int(int n);
void sys_error(char *argv, int count, char *error, char *program);
int basic_exit(char *arg, int status);
int _env(char *arg, char **args);
char *checkspaces(char *line);
void ctrl_c(int sign);
int _atoi(char *s);
ssize_t _getline(char **buffline, size_t *size, FILE *std);
void _free(char *command, char *arg, char **args);
#endif
