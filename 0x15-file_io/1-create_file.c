#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - creates a file and writes content to it
 * @filename: the name of the file to create
 * @text_content: the NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int write_result = 0;
	ssize_t text_length = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length] != '\0')
			text_length++;

		write_result = write(file_descriptor, text_content, text_length);
	}

	if (write_result == -1 || (text_content != NULL &&
		write_result != text_length))
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);
	return (1);
}
