# include <stdio.h>
int reverse(int n);
int rev=0,digits=0;
int main()
{
  int n;
  printf("Enter a no.\n");
  scanf("%d",&n);
  int k=reverse(n);
  if(k==n)
  {
    printf("The no. you entered is palindrome\n");
  }
  else
  {
    printf("The no. you enter is NOT palindrome\n");
  }
}
int reverse(int n)
{
  while(n>0)
  {
    int r=n%10;
    rev=rev*10+r;
    digits++;
    n=n/10;
  }
return rev;
}
