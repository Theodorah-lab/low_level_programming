#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: If the function fails - -1.
 * Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int write, read, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	read = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write = write(read, text_content, length);

	if (read == -1 || write == -1)
		return (-1);

	close(read);

	return (1);
}
