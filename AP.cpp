#include <iostream>

using namespace std;
int ap(int n){
   return 3*n+7;
}
int main()
{
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    int b=ap(a);
    cout<<b;
    return 0;
}
