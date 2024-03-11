#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 * separated by ", " in ascending order
 * using the putchar function
 * Alternative
 * int main(void)
 * {
 * int n;
 * for (n = 0; n <= 9; n++)
 * {
 * putchar ((n % 10) + '0');
 * if (n == 9)
 * continue;
 * putchar(',');
 * putchar(' ');
 * }
 * putchar('\n');
 * return (0);
 * }
 * Return: 0 (Success)
 */
int main(void)
{
int pCombo;
for (pCombo = 0; pCombo <= 9; pCombo++)
{
putchar(pCombo + '0');
if (pCombo != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
