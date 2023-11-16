#include "main.h"
#include <stdlib.h>

/*
 * File: main.h
 * Author: tolushittu5
 * Desc: Header file with prototypes for functions
 */

/**
 * read_textfile - reads text file then prints to POSIX stdout
 * @filename: pointer to the name of file
 * @letters: number of letters to read 
 * Return: read file and display or function fail or filename is NULL - 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
