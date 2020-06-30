// Program to Check whether a given number is perfect number or not

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
  int n,sum=0;
  cin>>n;

  for(int i=1;i<n;i++){
    if(n%i==0){
      sum=sum+i;
    }
  }
  cout<<sum;
  if(n==sum){
  cout<<" is a perfect number";
}else cout<<" is not a perfect number";
}
