#include <stdio.h>
void bubble_sort(int*,int);
int main()
{
    int size,i, t, j;
    printf("Enter size of the array: \n");
    scanf("%d",&size);
    int a[size];
    printf("Enter the elements of the array: \n");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("The elements of the array before sorting: \n");
    for(i=0;i<size;i++)
    printf("%d ",a[i]);
    printf("\n");
    bubble_sort(a,size);
}
void bubble_sort(int*ptr,int size)
{
    int t;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (ptr[i] > ptr[j]) {
                t = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = t;
            }
        }
    }
    printf("The elements of the array after sorting: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
}
