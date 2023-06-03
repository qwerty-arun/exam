# include <stdio.h>
void selection_sort(int *,int);
int main()
{
  int min,t,size,j;
  printf("Enter the size of the array: \n");
  scanf("%d",&size);
  int a[size];
  printf("Enter the elements of the array: \n");
  for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("The elements of the array before sorting: \n");
    for(int i=0;i<size;i++)
   printf("%d",a[i]);
    selection_sort(a,size);
 }
 void selection_sort(int *ptr,int size)
 {
     int min,t;
 for(int i=0;i<size-1;i++)
  {
    min=i;
    for(int j=i+1;j<size;j++)
    {
      if(ptr[j]<ptr[min])
      {
        min=j;
      }
    }
    t=ptr[i];
    ptr[i]=ptr[min];
    ptr[min]=t;
  }
  printf("The array arranged in ascending order using selection sort technique: \n");
  for(int i=0;i<size;i++)
    printf("%d ",ptr[i]);
 }
