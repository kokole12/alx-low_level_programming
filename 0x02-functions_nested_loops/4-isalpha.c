#include "main.h"

/**
 * main - entry point
 *
 * @c: comparison variable
 *
 * Return: always retruns 0
 */
int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return (1);
    }
    return(0);
}
