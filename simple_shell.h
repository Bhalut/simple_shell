#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>


int _putchar(char c);

/*Strings*/
char *_strdup(char *str);

/*Shell*/
void shell_prompt(void);
void child_process(char *buffer);
char **str_to_arrays(char *buffer_str);

#endif /* SIMPLE_SHELL_H */
