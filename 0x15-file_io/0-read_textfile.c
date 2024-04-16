#include "main.h"

/**
 * read_textfile - Reads a text file and
 * prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 * If the file cannot be opened or read, returns 0.
 * If @filename is NULL, returns 0. If write fails
 * or does not write the expected
 * amount of bytes, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file;
ssize_t checkIfRead, numWords;
char *buffer;

/* Check if filename is NULL and return 0 */
if (filename == NULL)
return (0);

file = open(filename, O_RDONLY);/* Open the File in Read only mode */
if (file == -1)/* Check if file was opened successfully */
return (0);

buffer = malloc(sizeof(char) * letters);/* Allocate memory for the buffer */
if (buffer == NULL)/* Check if memory allocation was successful */
close(file);
return (0);

checkIfRead = read(file, buffer, letters);/* Read the file into buffer */
if (checkIfRead == -1)/* Check if read was successful */
free(buffer);
close(file);
return (0);

numWords = write(STDOUT_FILENO, buffer, checkIfRead);
/* Write the buffer to STDOUT_FILENO/Standard output */
if (checkIfRead != numWords || numWords == -1)
/* Check if write was successful */
free(buffer);
close(file);
return (0);

free(buffer);/* Cleanup and close the file */
close(file);

return (numWords);/* Return the number of words written to STDOUT */
}
