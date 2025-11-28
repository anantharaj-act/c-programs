#include <stdio.h>

int main()
{
int num = 1234;
int *iptr = &num;
char *cptr =(char *) &num;

printf("Integer ptr is : %d\n", *iptr);
printf("Char ptr is : %d\n", *cptr);
return 0;
}

