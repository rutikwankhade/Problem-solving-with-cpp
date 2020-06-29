// Program to calculate sum of n natural numbers

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
  int n, sum=0;
  cin>>n;

  for(int i=1;i<=n;i++){
    sum=sum + i;
  }
  cout<<"the sum of first"<<n<<"natural numbers is"<<sum;
}
