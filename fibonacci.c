#include <stdio.h>
int fibbonacci(int n);
int main()
{
    int n;
    printf("Enter a maximum length of fibonacci sequence to be printed: \n");
    scanf("%d",&n);
    printf("The sequence upto %d terms: ",n);
    for(int i=1;i<=n;i++)
    {
    int k = fibbonacci(i);
    printf("%d ",k);
    }
    printf("\n");
    return 0;
}

int fibbonacci(int n)
{
        if (n == 1) {
            return 0;
        }
        if (n == 2) {
            return 1;
        }
    return(fibbonacci(n - 1) + fibbonacci(n - 2));
}
