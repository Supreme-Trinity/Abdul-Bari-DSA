#include <iostream>

using namespace std;

void ReverseArray(int arr[], int n){
    int arr2[10000];
    int i=0;
    for(int j=n-1;j>=0;j--){
        arr2[i]=arr[j];
        i++;
    }
    for(int i=0; i<n; i++){
        cout<<arr2[i]<<" ";
    }
}

int main()
{
    //Reversing an array
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    ReverseArray(arr,n);

    return 0;
}
