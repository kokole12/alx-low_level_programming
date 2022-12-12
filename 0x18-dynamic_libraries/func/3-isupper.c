#include "main.h"
/**
 * _isupper - checks for upper case character
 * 
 * @c: variable for checking
 * 
 * Return: returns the 1 or 0
*/
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (1);
    }
    return (0);
}
