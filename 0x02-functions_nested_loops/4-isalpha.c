#include "main.h"
/**
* _isalpha - function checks for upcase characters
* @c: is the int being used for arguments for the function
* Return: Always 0
*/
int _isalpha(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}
