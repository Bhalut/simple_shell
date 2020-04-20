#include "shell.h"
/**
 * ascii - Check if the characters typed are printable ASCII
 * @buffer: String typed in stdin
 *
 * Return: Null if fails, the same pointer if success
 */
char *ascii(char *buffer)
{
	unsigned int index;

	for (index = 0; buffer[index] != '\0';)
	{
		if (buffer[index] > 126 || buffer[index] < 32)
		{
			return ('\0');
		}
		else
		{
			index++;
		}
	}
	return (buffer);
}
