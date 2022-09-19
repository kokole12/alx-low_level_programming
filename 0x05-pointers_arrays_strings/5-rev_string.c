#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses the string
 *
 * @c: character to hold reversal
 * @i: for tracking the loop
 *
 */
void rev_string(char *s)
{
int i;
char c;

for (i = 0; i < _strlen(s); i++)
{
c = s[i];
s[i] = s[_strlen(s) - i - 1];
s[_strlen(s) - i - 1] = c;
}
}
