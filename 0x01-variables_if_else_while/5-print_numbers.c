#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:  Prints all single digit numbers of base 10
 *
 * i - will print 0123456789
 *
 * Return: 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
