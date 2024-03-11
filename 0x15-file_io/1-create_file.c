#include "main.h"

/**
 * create_file - Creates a file with the given filename and writes the content.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file (a NULL-terminated string).
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int fdescriptor, contentwritten, wordslen = 0;

/* Check if filename is NULL and return -1 */
if (filename == NULL)
return (-1);

/*Open the file in write-only mode with O_CREAT, O_WRONLY, and O_TRUNC flags*/
/*Set file permissions to rw------- using S_IRUSR and S_IWUSR. */
fdescriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (fdescriptor == -1)
return (-1);

/*If text_content is not NULL, calculate the length of*/
/*the string and write the content to the file*/
if (text_content != NULL)
{
while (text_content[wordslen] != '\0')
wordslen++;
contentwritten = write(fdescriptor, text_content, wordslen);
/* Check if write was successful */
if (contentwritten != wordslen)
{
close(fdescriptor);
return (-1);
}
}

/* Close the file and return 1 to indicate success */
close(fdescriptor);
return (1);
}
