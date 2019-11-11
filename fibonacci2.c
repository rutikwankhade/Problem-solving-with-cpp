//c program to print the fibonacci series till a certain number
//c program to display fibonacci series of first n number of terms
#include<stdio.h>
int main()
{
  int j=0,k=1,nextterm,n;

  printf("enter the number till you want the sequence");
  scanf("%d",&n);
  printf("the fibonacci series is \n");
printf("%d %d",j,k); // first two terms will be 0 and 1
nextterm=j+k;
  while(nextterm<=n)
     {
       printf("%d ",nextterm);

       j=k;
      k=nextterm;
      nextterm=j+k;
     }
}
