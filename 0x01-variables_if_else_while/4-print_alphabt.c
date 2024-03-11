#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet except
 * e and q using putchar function
 *
 * Return: 0 (Success)
 * Aternative
 * int main(void)
 * {
 * char ch = 'a';
 * while (ch <= 'z')
 * {
 * if (ch == 'e' || ch == 'q')
 * ch++;
 * putchar(ch);
 * ch++;
 * }
 * putchar('\n');
 * return (0);
 * }
 */
int main(void)
{
char alphabetExceq;
for (alphabetExceq = 'a'; alphabetExceq <= 'z'; alphabetExceq++)
{
if (alphabetExceq == 'e' || alphabetExceq == 'q')
{
alphabetExceq++;
}
putchar(alphabetExceq);
}
putchar('\n');
return (0);
}
