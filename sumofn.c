// c program to calculate sum of n natural numbers
#include<stdio.h>
int main()
{
  int n,i,sum=0;
  printf("enter the number n");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
    sum=sum+i;
  }
  printf("the sum of %d natural numbers is %d",n,sum);
}
