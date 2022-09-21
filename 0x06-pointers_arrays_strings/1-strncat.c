#include "main.h"

/**
 * _strncat - concats two strings
 *
 * @dest: dsetination array to cat
 * @src: source array to cat
 * @n: tracking value
 *
 * Return:  returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;

for (i = 0; dest[i] != '\0'; i++);
for (j = 0; src[j] != '\0' && j < n; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
