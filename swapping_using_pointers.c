#include <stdio.h>
void swap(int* , int *);
int main() {
   int a=6,b=8;
   printf("Before swapping: a=%d and b=%d\n",a,b);
   swap(&a,&b);
    return 0;
}
void swap(int* p,int *q)
{
    *p=(*p) + (*q);
    *q=(*p) - (*q);
    *p=(*p) - (*q);
    printf("After swapping: a=%d and b=%d",*p,*q); 
}
