//c program to display fibonacci series of first n number of terms
#include<stdio.h>
int main()
{
  int i,j=0,k=1,nextterm,n;//i for loop and n for limit
  //j,k,nextterm for calculating the series
  printf("enter the number of terms to be in sequence");
  scanf("%d",&n);
  printf("the fibonacci series is \n");
  for(i=0;i<=n;i++)
     {
       printf("%d ",j);
       nextterm=j+k;
       j=k;
      k=nextterm;
     }
}
