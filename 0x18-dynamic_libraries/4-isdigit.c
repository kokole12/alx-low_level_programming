#include "main.h"
/**
 * _isdigit - check for digits
 * 
 * @c: variable for checking digit
 * 
 * Return: returns 1 or 0
*/
int _isdigit(int c)
{
    if (c >= 0 && c <= 9)
    {
        return (1);
    }
    return (0);
}
