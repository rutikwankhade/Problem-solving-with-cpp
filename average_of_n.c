//program to find the average of n numbers

#include<stdio.h>
int main()
{
  int n,num,sum=0,temp;

  printf("enter the total numbers to be added");
  scanf("%d",&n);
  temp=n;
  while(n!=0)
  {
    printf("enter the number");
    scanf("%d",&num);
    sum=sum+num;
    n--;
  }
  sum=sum/temp;
  printf("the average is %d",sum);

}
