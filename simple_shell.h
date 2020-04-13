#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
void shell_prompt(void);
char **str_to_arrays(char *buffer_str);
char *_strdup(char *str);
#endif /* SIMPLE_SHELL_H */
