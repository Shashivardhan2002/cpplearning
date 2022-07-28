#include<iostream>
#include<math.h>
using namespace std;
setBits(int a){
    int rem=0;
    int i=0;
   while(a!=0){
        int bit=a&1;
        rem=(bit*pow(10,i))+rem;
        a=a>>1;
        i++;
   }
   return rem;
}
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int m=setBits(n);
    cout<<m;
}
