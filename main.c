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

	if (!isatty(0))
	{
<<<<<<< HEAD
		prompt();
		line = geline(&buffer, &buff_size, stdin);
		args = str_to_arrays(buffer, " \n\t");
		process(args);
		number_cmd++;
	}
=======
		line = getline(&buffer, &buff_size, stdin);
		process(buffer);
	}
	else
	{
		do {
			prompt();
			line = getline(&buffer, &buff_size, stdin);

			if (line == EOF)
			{
				free(buffer);
				_putchar('\n');
				return (EXIT_SUCCESS);
			}

			process(buffer);
		} while (line != EOF);
	}

>>>>>>> 62d8ab1cb5b2ce2455a04aa5f24a26508be9ff36
	return (EXIT_SUCCESS);
}
