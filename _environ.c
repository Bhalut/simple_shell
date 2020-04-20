#include "shell.h"
/**
 * _environ - copy all the environment Variables
 *
 * Return: void
 */
char **_environ(void)
{
	unsigned int i, j;
	char **_env;

	while (environ[i] != '\0')
	{
		i++;
	}
	_env = malloc((sizeof(char *) * i) + 1);
	if (_env == '\0')
	{
		perror("Failed to allocate memory");
		return ('\0');
	}
	j = 0;
	while (environ[j] != '\0')
	{
		_env[j] = _strdup(environ[j]);
		j++;
	}
	_env[j] = '\0';
	environ = _env;
	return (_env);
}
