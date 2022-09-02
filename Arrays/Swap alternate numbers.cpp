#include <iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i+=1){
        cout<<arr[i];
    }cout<<endl;
}
void alternateSwap(int arr[],int n){
    int temp;
    for(int i=0;i<n;i+=2){
        if((i+1)<n){
           temp=arr[i];        \\ we can also use swap()keyword to swap two numbers 
           arr[i]=arr[i+1];
           arr[i+1]=temp;

        }
    }
}


int main()
{
    int even[8]={0,1,2,3,4,5,6,7};
    alternateSwap(even,8);
    printArray(even,8);
     
    return 0;
}
