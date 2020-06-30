// Program to find factorial of a number

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
int n,fact=1;
cin>>n;
for(int i=n;i>=1;i--){
fact=fact*i;
}
cout<<"factorial of "<<n<<"is "<<fact;
}
