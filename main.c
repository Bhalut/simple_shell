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
int main(__attribute__((unused))int argc, __attribute__((unused)) char *argv[])
{
	char *buffer = NULL;
	size_t buff_size = 0;

	while (EOF)
	{
		prompt();
		getline(&buffer, &buff_size, stdin);
		process(buffer);
	}

	return (EXIT_SUCCESS);
}
