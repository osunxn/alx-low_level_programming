#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers
 * starting with 1 and 2 folled by a new line
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int count;
long fib1 = 1, fib2 = 2, nextTerm;

printf("%ld, %ld, ", fib1, fib2);

for (count = 3; count <= 50; count++)
{
nextTerm = fib1 + fib2;
printf("%ld", nextTerm);

if (count != 50)
printf(", ");

fib1 = fib2;
fib2 = nextTerm;
}

printf("\n");

return (0);
}
