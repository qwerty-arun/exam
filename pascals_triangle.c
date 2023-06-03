# include <stdio.h>
int factorial(int n);
int f=1;
int combinations(int n,int r,int nmr);
int main()
{
  int rows;
  printf("Enter no. of rows of Pascal's triangle that need to be printed:\n");
  scanf("%d",&rows);
  int dup_rows=rows;
  printf("Pascal's triangle: \n");
  for(int n=0;n<rows;n++)
  {
    for(int i=dup_rows/2;i>=0;i--)
    {
      printf("\t");
    }
    for(int r=0;r<=n;r++)
    {
      int nfact=factorial(n);
      int rfact=factorial(r);
      int nminusr_fact=factorial(n-r);
      int c=combinations(nfact,rfact,nminusr_fact);
      printf("%d\t",c);
    }
    printf("\n");
    dup_rows--;
  }
}
int factorial(int n)
{
  if(n==0)
  {
    return 1;
  }
  f=n*factorial(n-1);
}
int combinations(int n,int r,int nmr)
{
  int ncr=n/(r*nmr);
  return ncr;
}
