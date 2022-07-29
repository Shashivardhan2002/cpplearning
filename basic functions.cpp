#include<iostream>
using namespace std;
int fibo(int n){
  int a=0,b=1;
  cout<<a<<""<<b<<"";
  for(int i=2;i<=n;i++){
  int fact=a+b;
    return fact;
   a=b;
  b=fact;
  }
}
int main(){
  int a;
 cout<< "Enter the number: ";
  cin>>a;
  int k = fibo(a); 
  cout<<k;
