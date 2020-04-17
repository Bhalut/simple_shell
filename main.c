#include "shell.h"

/**
 * main - Command-line interpreter
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success process)
 *
 * Authors: Monica Ortiz - Abdel Mejia
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	char *buffer = NULL;
	size_t buff_size = 0;
	ssize_t line = 0;
	char **args;
	unsigned int number_cmd = 1;

	while (line != EOF)
	{
		prompt();
		line = geline(&buffer, &buff_size, stdin);
		args = str_to_arrays(buffer, " \n\t");
		process(args);
		number_cmd++;
	}
	return (EXIT_SUCCESS);
}
