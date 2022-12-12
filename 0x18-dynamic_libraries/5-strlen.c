#include "main.h"
/**
 * _strlen - finds the length of the string
 * 
 * @s: pointer to the string
 * 
 * Return: returns the value of length 
*/
int _strlen(char *s)
{
    int count;

    for (count = 0; s[count] != '\0'; count++)
    {
        count++;
    }

    return (count);
}
