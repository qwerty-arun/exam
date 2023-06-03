// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int  factorial(int n);
int main() {
printf("Enter the no. of which you want to calculate the factorial of:\n");    
int n;
scanf("%u",&n);
if(n<0)
{
    printf("Enter a positive integer!");
   exit(0);
}
printf("The factorial of %d is:",n);
int fact=factorial(n);
printf("%d",fact);
    return 0;
}
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    return(n*factorial(n-1));
}
