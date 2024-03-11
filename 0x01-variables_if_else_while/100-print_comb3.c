#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits
 * separated by ", " in ascending order
 * using the putchar function
 * *int main(void)
 * Alternative
 * {
 * int digit1 = 0, digit2;
 * while (digit1 <= 9)
 * {
 * digit2 = 0;
 * while (digit2 <= 9)
 * {
 * if (digit1 != digit2 && digit1 < digit2)
 * {
 * putchar(digit1 + 48);
 * putchar(digit2 + 48);
 * if (digit1 + digit2 != 17)
 * {
 * putchar(',');
 * putchar(' ');
 * }
 * }
 * digit2++;
 * }
 * digit1++;
 * }
 * putchar('\n');
 * return (0);
 * }
 * Return: 0 (Success)
 */
int main(void)
{
int firstDigit;
int secondDigit;
for (firstDigit = 0; firstDigit <= 8; firstDigit++)
{
for (secondDigit = firstDigit + 1; secondDigit <= 9; secondDigit++)
{
putchar(firstDigit + '0');
putchar(secondDigit + '0');
if (firstDigit != 8 || secondDigit != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
