#include <unistd.h>
/**
 * main - An entry into a C program
 * and that piece of art is useful - Dora Korpar, 2015-10-19: Return of main
 * void - Indicate the program will not take input from user
 * description: A program Using the puts function
 * Return: (0); (success) toindicate the code ran without any errors
*/
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
