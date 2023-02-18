#include <stdlib.h>
#include <time.h>
#include <stdio>
/**
 *main - main 123
 *
 *description: test
 *
 *Return:0 */

/* betty style doc for function main goes there */
int main(void)
{
int n=0;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("enter a number =%d\n",n);
scanf("%d\n",&n);
printf("your number is %d",n);
if(n>0)
printf("%d is positive",n);
else if(n==0)
printf("%d is zero",n);
else if(n<0)
printf("%d is negative\n",n);

return (0);
}
