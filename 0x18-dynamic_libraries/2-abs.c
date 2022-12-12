#include "main.h"
/**
 * _abs - tracks absolute values
 * 
 * @n: variable to check
 * 
 * Return: returns the values
*/
int _abs(int n)
{
    if (n > 0)
    {
        return (n);
    }
    else if (n < 0)
    {
        return (-n);
    }
    else
    {
        return (0);
    }
    
}
