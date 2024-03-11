#include"main.h"

/**
* puts_half - prints half of a string
*
* @str: string parameter input
*
* Return: Nothing
*/

void puts_half(char *str)
{
int length = 0;
int i, start_index;

/*Calculate the length of the string*/
while (str[length] != '\0')
length++;

/*Calculate the start index for printing the second half*/
if (length % 2 == 0)
start_index = length / 2;
else
start_index = (length + 1) / 2;

/*Print the second half of the string*/
for (i = start_index; i < length; i++)
putchar(str[i]);

putchar('\n');
}
