#include <iostream>

using namespace std;

int main()
{
    int size,sum=0;
    cout<<"Enter size of array:";
    cin>>size;
    int arr[100];
    cout<<"Enter values:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
       sum=sum+arr[i] ;
    }
    cout<<"The sum is:"<<sum;
    return 0;
}
