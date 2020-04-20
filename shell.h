#ifndef SHELL_H
#define SHELL_H

/* include library */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>

/* Variables  */
extern char **environ;

/* putchar prototype */
int _putchar(char c);

/* Strings */
char *_strdup(char *str);
char *_strcat(char *str1, char *str2);
unsigned int _strlen(char *trs);
int _strcmp(const char *str1, const char *str2);

/* Shell */
void prompt(void);
void process(char **args);
char *_getenv(const char *str);
char **_environ(void);
char *ascii(char *buffer);
char *sep_check(char *buffer);
char **str_to_arrays(char *buffer_str, char sep[]);

/* Util */
void msgerr(const char *str, int status);

#endif /* SHELL_H */
