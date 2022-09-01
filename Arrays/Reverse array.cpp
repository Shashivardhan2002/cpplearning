#include <iostream>

using namespace std;

int main()
{
    int n,sum=0,i ,j,temp;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[100];
    cout<<"Enter values:"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"original series is:";
     for(i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<"\n";
     for(i=0,j=n-1;i<n/2;i++,j--){
         temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
     }
     cout<<"Reversed array is:";
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
