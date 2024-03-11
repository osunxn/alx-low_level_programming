#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase and
 * Uppercase using putchar function
 *
 * Return: 0 (Success)
 */
int main(void)
{
char alphabetLowc;
char alphabetUpC;
for (alphabetLowc = 'a'; alphabetLowc <= 'z'; alphabetLowc++)
{
putchar(alphabetLowc);
}
for (alphabetUpC = 'A'; alphabetUpC <= 'Z'; alphabetUpC++)
{
putchar(alphabetUpC);
}
putchar('\n');
return (0);
}
