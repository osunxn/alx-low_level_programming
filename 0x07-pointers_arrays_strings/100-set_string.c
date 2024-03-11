#include <stdio.h>

/**
* set_string - Sets the value of a pointer to a char.
* @s: Pointer to a pointer to a char.
* @to: Pointer to a char.
*
* Description: This function takes a double pointer @s and a pointer @to.
* It assigns the value of @to to the memory location pointed to by @s.
* This updates the value of the original pointer in the calling function.
*/
void set_string(char **s, char *to)
{
*s = to;
}
