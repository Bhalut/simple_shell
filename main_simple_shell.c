#include "simple_shell.h"

/**
 * main - Command-line interpreter
 *
 * Return: Always 0 (Success process)
 */
int main(void)
{
	int getln_val = 1;
	char *buffer = NULL;
	size_t buff_size = 0;

	while (getln_val != -1)
	{
		shell_prompt();
		getln_val = getline(&buffer, &buff_size, stdin);
		child_process(buffer);
	}
	return (0);
}
