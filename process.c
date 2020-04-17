#include "shell.h"

/**
 * msg - message handler
 * @sig: signal
 *
 * Return void
 */
void msg(int sig)
{
	if (sig == SIGINT)
	{
		_putchar('\n');
		prompt();
	}
}

/**
 * process - New process and execute
 * @args: Array of pointers with arguments taken by getline
 *
 * Return: void
 */
void process(char **args)
{
	pid_t child_id;

	child_id = fork();
	if (child_id < 0)
	{
		msgerr("Failed to create new process", 1);
	}
	else if (child_id == 0)
	{
		if (execve(args[0], args, environ) == -1)
		{
			msgerr("Failed to execute the process", 1);
		}
	}
	else
	{
		wait(NULL);
		signal(SIGINT, msg);
	}
}
