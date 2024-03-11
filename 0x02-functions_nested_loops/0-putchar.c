#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description :  prints "_putchar", followed by a new line
 * using the  _putchar function from main.h inclusion guard
 *
 * Note: you can also declear the variable i outside the for
 * look and call it in the loop
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char pCh[] = "_putchar";
int i;

for (i = 0; i < 8; i++)
{
_putchar(pCh[i]);
}

_putchar('\n');

return (0);
}
