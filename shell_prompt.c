#include "simple_shell.h"

/**
 * shell_prompt - Function that print shell prompt
 *
 * Return: void
 */
void shell_prompt(void)
{
	char prompt[] = "#cisfun$ ";
	int i;

	i = 0;
	while (prompt[i] != '\0')
	{
		_putchar(prompt[i]);
		i++;
	}
}
