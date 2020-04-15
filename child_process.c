#include "simple_shell.h"
/**
 * child_process - New process and execute
 * @buffer: string allocade by buffer
 *
 * Return: void
 */
void child_process(char *buffer)
{
	pid_t child_id;
	char **prts;

	prts = str_to_arrays(buffer);
	child_id = fork();
	if (child_id < 0)
	{
		perror("Failed to create new process");
		exit(1);
	}
	else if (child_id == 0)
	{
		if (execve(prts[0], prts, environ) == -1)
		{
			perror("Failed to execute the process");
			exit(1);
		}
	}
	else
	{
		wait('\0');
	}
}
