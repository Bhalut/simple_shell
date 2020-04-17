#include "shell.h"
/**
 *_getenv - get an environment variable
 *@str: Name of the variable
 *
 *Return: Pointer with the value of the variable
 */
char *_getenv(const char *str)
{
	unsigned int m;
	char *aux;
	char *val;
	char *token;
	char del[] = "=";

	for (m = 0; environ[m] != '\0'; m++)
	{
		aux = _strdup(environ[m]);
		if (aux == '\0')
		{
			perror("Failed to allocate memory for aux variable");
			return ('\0');
		}
		token = strtok(aux, del);
		if (_strcmp(str, token) == 0)
		{
			token = strtok('\0', del);
			val = _strdup(token);
			if (val == '\0')
			{
				perror("Failed to allocate memory for aux variable");
				free(aux);
				return ('\0');
			}
			free(aux);
			return (val);
		}
		else
		{
			free(aux);
		}
	}
	return ('\0');
}
