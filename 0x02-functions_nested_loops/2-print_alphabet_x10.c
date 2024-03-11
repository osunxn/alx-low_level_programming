#include "main.h"
/**
 * print_alphabet_x10 - utilizes on the _putchar function to print
 * the alphabet a - z times 10
*/
void print_alphabet_x10(void)
{
int alp;
int i;

for (i = 0; i < 10; i++)
{
for (alp = 'a'; alp <= 'z'; alp++)
_putchar(alp);
_putchar('\n');
}
}
