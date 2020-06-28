//program to find number of digits in a number

#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
  int n, count=0;
  cin>>n;
  if(n==0){
    cout<<"count is"<<count;
  }
  while(n!=0){
    n=n/10;
    count=count+1;
  }

  cout<<"count is"<<count;

}
