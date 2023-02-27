#include "main.h"

/**
*_strlen -> function to get the length of a string 
*@s: string pointer to passed to this function 
*Return: returns length of the string 
*/
int _strlen(char *s)
{
    int lens;

    for(; *s != '\0'; s++)
    {
	lens = len +1;
        *s = *s +1;
    }
    return (lens);
}
