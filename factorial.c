// c program to find the factotial of a number
#include<stdio.h>
int main()
{
  int n,i;
  unsigned long long fact=1; // the factorial can be a very big value
  printf("enter the number");
  scanf("%d",&n);

  if(n<0)
         {
           printf("sorry! factorial of negative numbers do not exist");
         }
  else
      {
        for(i=n;i>=1;i--)
           {
            fact=fact*i;
           }
           printf("the factorial of %d is %llu",n,fact);
           //llu is format specifier for unsigned long long
      }

}
