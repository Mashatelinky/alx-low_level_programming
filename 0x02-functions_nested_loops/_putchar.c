#include "main.h"
#include <unistd.h>
/**
* _putchar writes the cgaracter c to stdout
* @c: The character to print 
*
*Return: on success 1.
*On error , -1 returned, and errno is set appropriately.
*/
int _putchar(char c)
{
       retutn (write(1, &c, 1));


}
