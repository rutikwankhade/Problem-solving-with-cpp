// Program to find the sum of numbers in a given range

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
  int start, end, sum=0;
  cin>>start>>end;

  for(int i=start;i<=end;i++){
    sum=sum +i;
  }
  cout<<"the sum of numbers between "<<start<<" to "<<end<<" is "<<sum;
}
