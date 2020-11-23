<p align="center">
   <img src="https://www.holbertonschool.com/holberton-logo.png"(https://encrypted-tbn0.gstatic.com/images?q=tbn%3AANd9GcTLtL_ToHLEo_BWFxD-yf32Ux3zfsH_NPc8Qw&usqp=CAU)
     alt="Flow chart"
     style="float: left; margin-right: 10px;">
</p>

## SIMPLE_SHELL 🐚
Simple UNIX command interpreter built as the final project of the first trimester at Holberton School.

### Installation

#### Requirements
 - Gcc >= 4.8.4
 - Linux

#### Steps to compile and execute.
 - `git clone https://github.com/gdorelo/simple_shell.git`
 - `cd simple_shell`
 - `gcc -Wall -Werror -Wextra -pedantic *.c -o shell`
 - `./shell`


### Functions
Prototypes | Description
----------- | -------------
**loop** | Start the main loop to our shell.
**read_command_line** | Read the command line.
**checkspaces** | Function to avoid spaces at the beginning of the command line.
**splitline** | Split command line and convert each argument to *tokens*.
**splitpath** | Split the path in a new string.
**execute** | Execute all arguments in command line.
**_getenv** | Search the enviroment list to find an enviroment variable.
**_env** | Funtion check if the command is "env" to print **environ.
**_putchar** | Function to print a character.
**_puts** | Function to print a string.
**prompt** | Prompt the user with "$ ".
**print_environ** | Print the environment.
**print_int** | Print a number in STDERR.
**sys_error** | Print in STDERR when a command is not found or the program does not exist.
**getpath** | Get the command's full path.
**atoi** | Change a character to a integer.
**_free** | Function to free arguments.
**basic_exit** | Check if the command entered is "exit" and exit the shell.
**ctrl_c** | Function to treat ctrl+c as a normal input and not exit.
**_strtok** | Function to tokenize a string according to a defined delimiter.
**_strcat** | Function to concatenate two strings.
**_strcmp** | Function to compare two strings.
**_strncmp** | Function to compare two strings with a certain amount of characters.
**_strlen** | Function to get the length of a string.
**_strdup** | Function to duplicate a string.

### Files
This is the list of files used to compile our shell.

* [_free.c](https://github.com/gdorelo/simple_shell/blob/master/_free.c)
Function to free passed arguments.

* [_getenv.c](https://github.com/gdorelo/simple_shell/blob/master/_getenv.c)
Functions to check the environ variable for the PATH.

* [_strlen_.c](https://github.com/gdorelo/simple_shell/blob/master/_strlen_.c)
Function to count characters in a string.

* [atoi.c](https://github.com/gdorelo/simple_shell/blob/master/_free.c)
Function to convert a string into an integer.

* [check_functions.c](https://github.com/gdorelo/simple_shell/blob/master/check_functions.c)
Functions to check "exit" and "env" and extra spaces passed to the command line.

* [ctrl_c.c](https://github.com/gdorelo/simple_shell/blob/master/ctrl_c.c)
Function to not exit when the user presses "Ctrl + c".

* [execute.c](https://github.com/gdorelo/simple_shell/blob/master/execute.c)
Function execute each argument and return a integer to standard out.

* [getpath.c](https://github.com/gdorelo/simple_shell/blob/master/getpath.c)
Function to find a command with or without path.

* [loop.c](https://github.com/gdorelo/simple_shell/blob/master/loop.c)
Initializace the main loop of the shell.

* [main.c](https://github.com/gdorelo/simple_shell/blob/master/main.c)
Entry point to the shell.

* [print_functions.c](https://github.com/gdorelo/simple_shell/blob/master/print_functions.c)
Custom print functions.

* [read_command_line.c](https://github.com/gdorelo/simple_shell/blob/master/read_command_line.c)
Function that uses getline to read the command line.

* [prompt.c](https://github.com/gdorelo/simple_shell/blob/master/prompt.c)
Function to print the prompt.

* [shell.h](https://github.com/gdorelo/simple_shell/blob/master/shell.h)
Header of functions where are store the prototypes and libraries.

* [split_functions.c](https://github.com/gdorelo/simple_shell/blob/master/split_functions.c)
Functions to split the command line and the PATH.

* [string_functions.c](https://github.com/gdorelo/simple_shell/blob/master/string_functions.c)
Functions to handle strings.

* [sys_error.c](https://github.com/gdorelo/simple_shell/blob/master/sys_error.c)
Function to write errors when a command is not found or if fork fails.

#### REQUIREMENTS (from the intranet project page)

* Allowed editors: *vi*, *vim*, *emacs*
* All your files will be compiled on Ubuntu 14.04 LTS.
* Your programs and functions will be compiled with *gcc 4.8.4* using the flags *-Wall -Werror -Wextra* and *-pedantic*
* All your files should end with a new line
* A *README.md* file, at the root of the folder of the project is mandatory
* Your code should use the *Betty* style. It will be checked using *betty-style.pl* and *betty-doc.pl*
* No more than 5 functions per file.
* Your shell should not have any memory leaks.
* All your header files should be include guarded.
* Use system calls only when you need to.


### EXAMPLES
#### Modes

##### Non-interactive
*Command*
```
echo "/bin/ls" | ./hsh
```
*Output*
```
example.c   example.c  example.c        file     man_1_simple_shell  example.c  README.md 
AUTHORS  example.c      example.c  example.c  example.c      read_command_line.c         shell.h 
```
<hr>

##### Interactive
*Command*
```
./hsh
```
Then the prompt appears, so you can type in the command line, and press return
**Ex** - `/bin/ls`

*Output*
```
example.c   example.c  example.c        file     man_1_simple_shell  example.c  README.md 
AUTHORS  example.c      example.c  example.c  example.c      read_command_line.c         shell.h  
```



<p align="center"> AUTHORS </p>
<p align="center">
    <h2 align="center">Made by Gianluca Dorelo and Miguel Crespi</h2>
