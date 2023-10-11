#include "main.h"

/**
 * _islower - is the function that checks for lower case characters
 *@c:character to check if it islowercase
 *Return: 0 if lowercase, 1-not lowercase
 */

int _islower(int c)

{

if (c >= 'a' && c <= 'z')
{
return (1);
}

else
{
return (0);
}

}

