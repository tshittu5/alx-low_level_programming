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
	int fd, rd, wd;
	char *buff = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		return (0);
	}
	rd = read(fd, buff, letters);
	if (rd == -1)
	{
		return (0);
	}
	wd = write(STDOUT_FILENO, buff, rd);
	if (wd == -1)
	{
		return (0);
	}
	close(fd);
	free(buff);
	return (wd);
}
