#include "main.h"
/**
*print _most _numbets - print numbers 
*
*Return : always 0.
*/
void print_most_numbers(void)
{
int i;
i=0;
while (i < 10)
{
if (i !=2 && i !=4)
{
_putchar(i+ '0');
}
i++;
}
_putchar('\n');
}
