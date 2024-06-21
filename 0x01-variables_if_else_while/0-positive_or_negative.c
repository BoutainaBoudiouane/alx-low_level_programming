#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry point
* Description: This program assigns a random number to the variable n
* each time it is executed and prints whether the number stored in the
* variable n is positive, zero, or negative.
* return: always 0 (success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
