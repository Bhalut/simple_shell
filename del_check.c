#include "shell.h"
/**
 * sep_check - review if the string have sep chars
 * @buffer: string to check
 *
 * Return: Return NULL if find sep chars else the buffer.
 */
char *sep_check(char *buffer)
{
	unsigned int index = 0, sps = 0, tbs = 0;

	if (buffer[0] == '\n')
	{
		return ('\0');
	}
	index = 0;
	while (buffer[index] != '\n')
	{
		if (buffer[index] == ' ')
		{
			sps++;
		}
		if (buffer[index] == '\t')
		{
			tbs++;
		}
		index++;
	}
	if (sps > 0 || tbs > 0)
	{
		if (sps == index || tbs == i)
		{
			return ('\0');
		}
		else if ((sps + tbs) == index)
		{
			return ('\0');
		}
	}
	return (buffer);
}
