#include<iostream>
using namespace std;
int powerTwo(int n){
  if(n==0){
     return 1;
  }
    return 2*fact(n-1);
}
int main(){
    int a;
    cout<<"enter a number:";
    cin>>a;
    int b=powerTwo(a);
    cout<<b;
}
